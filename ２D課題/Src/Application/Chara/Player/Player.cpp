#include "Player.h"


void Player::Init()
{
	playerMove = 0;
	m_Player_IdleTex.Load("Texture/Chara/Player/Player_Idle.png");
	m_Player_MoveTex.Load("Texture/Chara/Player/Player_Move.png");
}

void Player::Update()
{
	Math::Matrix m_transMat;
	Math::Matrix m_scaleMat;
	Math::Matrix m_rotetoMat;

	float y;
	y = DirectX::XMConvertToRadians(180);

	switch (playerMove)
	{
	case 1:
		m_transMat = Math::Matrix::CreateTranslation(m_PlayerPos.x, m_PlayerPos.y, 0);
		m_scaleMat = Math::Matrix::CreateScale(0.5, 0.5, 1);
		m_rotetoMat = Math::Matrix::CreateRotationY(y);
		m_PlayerMat = m_rotetoMat * m_scaleMat * m_transMat;
		break;
	case 2:
		m_transMat = Math::Matrix::CreateTranslation(m_PlayerPos.x, m_PlayerPos.y, 0);
		m_scaleMat = Math::Matrix::CreateScale(0.5, 0.5, 1);
		m_PlayerMat = m_scaleMat * m_transMat;
		break;
	default:
		m_transMat = Math::Matrix::CreateTranslation(m_PlayerPos.x, m_PlayerPos.y, 0);
		m_scaleMat = Math::Matrix::CreateScale(0.5, 0.5, 1);
		m_PlayerMat = m_scaleMat * m_transMat;
		break;
	}
}

void Player::Draw()
{
	if (playerMove)
	{
		SHADER.m_spriteShader.SetMatrix(m_PlayerMat);
		SHADER.m_spriteShader.DrawTex(&m_Player_MoveTex, { 0, 0, 256, 256 });
	}
	else
	{
		SHADER.m_spriteShader.SetMatrix(m_PlayerMat);
		SHADER.m_spriteShader.DrawTex(&m_Player_IdleTex, { 0, 0, 256, 256 });
	}
}

void Player::Release()
{
	m_Player_IdleTex.Release();
}
