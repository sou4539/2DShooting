#pragma once
#include "../Static.h"

class Player;
class Enemy;
class Bullet;

class Hit
{
	public:
	Hit() { Init(); }
	~Hit() { Release(); }
	
	void Update();
	void Draw();

	bool GetHit();
private:
	void Init();
	void Release();

	

	Player* m_player = nullptr;
	Enemy* m_enemy = nullptr;
	Bullet* m_bullet = nullptr;

	Math::Vector2 m_playerPos;
	Math::Vector2 m_enemyPos[Enemy_Max];
	Math::Vector2 m_bulletPos[Bullet_Max];
};