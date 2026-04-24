#include "Control.h"



Control::Control()
{
    m_Status = nullptr;
    m_Player = nullptr;
	m_Bullet = nullptr;
}

void Control::Init(Player* player, Status* status, Bullet* bullet)
{
    m_Player = player;
    m_Status = status;
	m_Bullet = bullet;
}

void Control::Update()
{
    if (m_Player && m_Status && m_Bullet)
    {
        MovePlayer(*m_Player, *m_Status, *m_Bullet);
    }
}

void Control::MovePlayer(Player& player, const Status& status, Bullet& bullet)
{
    auto pos = player.GetPos();
	// プレイヤーの移動処理
    if (GetAsyncKeyState(VK_RIGHT))
    {
        pos.x += status.GetSPD();
    }
    if (GetAsyncKeyState(VK_LEFT))
    {
        pos.x -= status.GetSPD();
    }
    if (GetAsyncKeyState(VK_UP))
    {
        pos.y += status.GetSPD();
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
        pos.y -= status.GetSPD();
    }
	// 弾の発射処理
	if (GetAsyncKeyState(VK_SPACE))
    {
		//pos = { 0,0 };//デモ用にプレイヤーの位置をリセット
        // 弾を発射する処理を追加
        for (int b = 0; b < Bullet_Max; b++)
        {
            if (!m_Bullet->GetBulletAlive(b))
            {
				m_Bullet->SetBulletAlive(b, true); // 弾を有効にする
                m_Bullet->GetBulletPos(b) = pos; // プレイヤーの位置から弾を発射
                break; // 一度に一つの弾しか発射できないようにする
			}
        }
    }
    //必殺発動
	if (GetAsyncKeyState(VK_RETURN))
    {
        //pos = { 0,0 };//デモ用にプレイヤーの位置をリセット
    }
    //ゲージ回復
    if (GetAsyncKeyState('Q') || GetAsyncKeyState('W') || GetAsyncKeyState('E') || GetAsyncKeyState('R'))
    {
        //pos = { 0,0 };//デモ用にプレイヤーの位置をリセット
    }
    player.SetPos(pos);
}
