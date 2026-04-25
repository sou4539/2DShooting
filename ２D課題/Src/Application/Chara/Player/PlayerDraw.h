#pragma once

class Player;

class PlayerDraw
{
public:
	PlayerDraw() { Init(); }
	~PlayerDraw() { Release(); }

	void Update();
	void Draw();

private:

	Player* m_Player;

	void Init();
	void Release();

	
	KdTexture m_Player_IdleTex;
	KdTexture m_Player_MoveTex;
	Math::Matrix m_PlayerMat;
	Math::Color m_PlayerColor;

	Math::Matrix m_transMat;
	Math::Matrix m_scaleMat;
	Math::Matrix m_rotetoMat;

	float y;
	
};