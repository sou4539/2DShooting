#include "Bullet.h"

void Bullet::Init()
{
	for (int b = 0; b < Bullet_Max; b++)
	{
		BulletFlg[b] = false;
		BulletPos[b] = {};
		BulletTex[b].Load("Bullet.png");
	}
}

void Bullet::Update()
{
	for (int b = 0; b < Bullet_Max; b++)
	{
		if (BulletFlg[b])
		{
			BulletPos[b].x += 10;
			BulletMat[b] = Math::Matrix::CreateTranslation(BulletPos[b].x, BulletPos[b].y, 0);
			if (BulletPos[b].x > WindowWidth)
			{
				BulletFlg[b] = false;
			}
		}
	}
}

void Bullet::Draw()
{
	for (int b = 0; b < Bullet_Max; b++)
	{
		if (BulletFlg[b])
		{
			SHADER.m_spriteShader.SetMatrix(BulletMat[b]);
			SHADER.m_spriteShader.DrawTex(&BulletTex[b], { 0, 0, 32, 32 });
		}
	}
}

bool Bullet::GetBulletAlive(int i)
{
	for (int b = 0; b < Bullet_Max; b++)
	{
		if (BulletFlg[b])
		{
			return true;
		}
	}
	return false;
}

void Bullet::Release()
{
	for (int b = 0; b < Bullet_Max; b++)
	{
		BulletTex[b].Release();
	}
}
