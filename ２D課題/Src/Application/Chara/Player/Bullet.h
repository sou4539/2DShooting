#pragma once
#include "../../Static.h"

class Bullet
{
public:
	Bullet() { Init(); }
	~Bullet() { Release(); }
	
	void Update();
	void Draw();
	bool GetBulletAlive(int i);
	bool SetBulletAlive(int i, bool alive) { return BulletFlg[i] = alive; }
	Math::Vector2& GetBulletPos(int i) { return BulletPos[i]; }
private:

	void Init();
	void Release();

	bool BulletFlg[Bullet_Max];
	Math::Vector2 BulletPos[Bullet_Max];
	Math::Matrix BulletMat[Bullet_Max];
	KdTexture BulletTex[Bullet_Max];
};