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

	bool BulletFlg[BulletNum];
	Math::Vector2 BulletPos[BulletNum];
	Math::Matrix BulletMat[BulletNum];
	KdTexture BulletTex[BulletNum];
};