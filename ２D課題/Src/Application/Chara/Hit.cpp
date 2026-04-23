#include "Hit.h"
#include "Player/Player.h"
#include "Enemy/Enemy.h"

void Hit::Init()
{

}
void Hit::Update()
{
}

void Hit::Draw()
{
}

bool Hit::GetHit()
{
	int e;
	m_playerPos = m_player->GetPos();
	m_enemyPos[e] = m_enemy->GetPos(e);

	if(m_playerPos.x-PlayerHeart/2<m_enemyPos[e].x+PlayerHeart/2&&
		m_playerPos.x+PlayerHeart/2>m_enemyPos[e].x-PlayerHeart/2&&
		m_playerPos.y-PlayerHeart/2<m_enemyPos[e].y+PlayerHeart/2&&
		m_playerPos.y+PlayerHeart/2>m_enemyPos[e].y-PlayerHeart/2)
	{
		return true;
	}
	return false;
}

void Hit::Release()
{
	if(m_player)
	{
		m_player = nullptr;
	}
	if (m_enemy)
	{
		m_enemy = nullptr;
	}
}