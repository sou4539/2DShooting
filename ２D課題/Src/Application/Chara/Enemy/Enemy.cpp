#include "Enemy.h"

void Enemy::Init()
{
	for (int i = 0; i < Enemy_Max; i++)
	{
		m_EnemyTex[i].Load("Enemy.png");
		m_EnemyPos[i] = { 400, 300 };
	}
}

void Enemy::Update()
{
	for (int i = 0; i < Enemy_Max; i++)
	{
		m_EnemyMat[i] = Math::Matrix::CreateTranslation(m_EnemyPos[i].x, m_EnemyPos[i].y, 0);
	}
}

void Enemy::Draw()
{
	for (int i = 0; i < Enemy_Max; i++)
	{
		SHADER.m_spriteShader.SetMatrix(m_EnemyMat[i]);
		SHADER.m_spriteShader.DrawTex(&m_EnemyTex[i], { 0, 0, 64, 64 });
	}
}

void Enemy::Release()
{
	for (int i = 0; i < Enemy_Max; i++)
	{
		m_EnemyTex[i].Release();
	}
}
