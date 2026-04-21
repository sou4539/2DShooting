#pragma once

class Player
{
public:
	Player() {}
	~Player() {}
	void Init();
	void Update();
	void Draw();
	void Release();

	Math::Vector2 GetPos() const { return m_Pos; }
	Math::Vector2 SetPos(const Math::Vector2& pos) { return m_Pos = pos; }
private:
	Math::Vector2 m_Pos;
	KdTexture m_PlayerTex;
	Math::Matrix m_PlayerMat;
	Math::Color m_PlayerColor;
};