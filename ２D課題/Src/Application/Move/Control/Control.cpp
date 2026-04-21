#include "Control.h"
#include "../../Chara/Player/Player.h"
#include "../../Chara/Status.h"


Control::Control()
{
    m_Status = nullptr;
    m_Player = nullptr;
}

void Control::Init(Player* player, Status* status)
{
    m_Player = player;
    m_Status = status;
}

void Control::Update()
{
    if (m_Player && m_Status)
    {
        MovePlayer(*m_Player, *m_Status);
    }
}

void Control::MovePlayer(Player& player, const Status& status)
{
    auto pos = player.GetPos();
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
    player.SetPos(pos);
}
