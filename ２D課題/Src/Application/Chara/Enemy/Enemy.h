#pragma once
#include "../../Static.h"

class Enemy
{
public:
	Enemy() { Init(); }
	~Enemy() { Release(); }
	
	void Update();
	void Draw();
	Math::Vector2 GetPos(int e) const { return m_EnemyPos[e]; }
private:
	void Init();
	void Release();

	Math::Vector2 m_EnemyPos[Enemy_Max];
	KdTexture m_EnemyTex[Enemy_Max];
	Math::Matrix m_EnemyMat[Enemy_Max];
	Math::Color m_EnemyColor[Enemy_Max];
};