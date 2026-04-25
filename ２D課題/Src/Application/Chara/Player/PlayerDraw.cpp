#include "PlayerDraw.h"
#include "Player.h"

void PlayerDraw::Update()
{
	switch (m_Player->GetPlayerMove())
	{
	case 1:
		m_transMat = Math::Matrix::CreateTranslation(m_Player->GetPos().x, m_Player->GetPos().y, 0);
		m_scaleMat = Math::Matrix::CreateScale(0.5, 0.5, 1);
		m_rotetoMat = Math::Matrix::CreateRotationY(y);
		m_PlayerMat = m_rotetoMat * m_scaleMat * m_transMat;
		break;
	case 2:
		m_transMat = Math::Matrix::CreateTranslation(m_Player->GetPos().x, m_Player->GetPos().y, 0);
		m_scaleMat = Math::Matrix::CreateScale(0.5, 0.5, 1);
		m_PlayerMat = m_scaleMat * m_transMat;
		break;
	default:
		m_transMat = Math::Matrix::CreateTranslation(m_Player->GetPos().x, m_Player->GetPos().y, 0);
		m_scaleMat = Math::Matrix::CreateScale(0.5, 0.5, 1);
		m_PlayerMat = m_scaleMat * m_transMat;
		break;
	}
}

void PlayerDraw::Draw()
{
	if (m_Player->GetPlayerMove())
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

void PlayerDraw::Init()
{
	m_Player_IdleTex.Load("Texture/Chara/Player/Player_Idle.png");
	m_Player_MoveTex.Load("Texture/Chara/Player/Player_Move.png");
	y = DirectX::XMConvertToRadians(180);
}

void PlayerDraw::Release()
{
	m_Player_IdleTex.Release();
}
