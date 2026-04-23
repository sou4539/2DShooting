#pragma once

#include "../../Chara/Player/Player.h"
#include "../../Chara/Status.h"
#include "../../Chara/Player/Bullet.h"

class Control
{
public:
    Control();
    ~Control() {}
    void Init(Player* player, Status* status, Bullet* bullet);
    void Update();
    void MovePlayer(Player& player, const Status& status, Bullet& bullet);

private:
    Status* m_Status;
    Player* m_Player;
	Bullet* m_Bullet;
};
