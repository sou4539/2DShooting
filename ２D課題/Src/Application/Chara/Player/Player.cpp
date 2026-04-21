#include "Player.h"

void Player::Init()
{
	m_PlayerTex.Load("Player.png");
}

void Player::Update()
{
	m_PlayerMat = Math::Matrix::CreateTranslation(m_Pos.x, m_Pos.y, 0);
}

void Player::Draw()
{
	SHADER.m_spriteShader.SetMatrix(m_PlayerMat);
	SHADER.m_spriteShader.DrawTex(&m_PlayerTex, { 0, 0, 64, 64 });
}

void Player::Release()
{
	m_PlayerTex.Release();
}
