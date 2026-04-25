#pragma once
#include "../../Static.h"

//class Control;

class Player
{
public:
	Player() { Init(); }
	~Player() { Release(); }

	void Update();
	void Draw();


	Math::Vector2 GetPos() const { return m_PlayerPos; }
	Math::Vector2 SetPos(const Math::Vector2& pos) { return m_PlayerPos = pos; }
	int SetPlayerMove(const int& move) { return playerMove = move; }
	int GetPlayerMove() { return playerMove; }
private:
	void Init();
	void Release();

	Math::Vector2 m_PlayerPos;
	int playerMove;

};