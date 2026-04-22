#include "Level.h"
#include "../Status.h"


void Level::Init()
{
	//レベルの取得
	now_Lv = 0;
	//レベル装備の初期化
	for (int i = 0; i < Weapons_Slot_Max; i++)
	{
		//Armor_Lv[i] = 0;
		Armor_Slot[i] = 0;
	}

}

void Level::Update()
{
	//レベルアップ確認
	if (now_Lv != m_status->GetLV())
	{
		//レベル増加
		now_Lv = m_status->GetLV();
		for (int i = 0; i < Weapons_View_Max; i++)
		{
			//装備の表示
			
		}
	}
}
