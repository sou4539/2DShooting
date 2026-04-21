#pragma once

class Status;
class Player;

class Control
{
public:
    Control();
    ~Control() {}
    void Init(Player* player, Status* status);
    void Update();
    void MovePlayer(Player& player, const Status& status);

private:
    Status* m_Status;
    Player* m_Player;
};
