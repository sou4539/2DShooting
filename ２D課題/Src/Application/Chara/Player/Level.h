#pragma once
#include "../../Static.h"

class Status;

class Level
{
public:
	Level() { Init(); }
	~Level() { Release(); }
	
	void Update();
	void Draw();

private:
	
	Status* m_status;
	int now_Lv;
	int Lv_Point;
	void Init();
	void Release();

	int Armor_Slot[Weapons_Slot_Max];				//装備スロット
	int Armor_Lv[Weapons_Lv_Max];					//装備レベル
	int Armor_View[Weapons_View_Max];				//表示する装備の数
	int Armor_Kind[Weapons_Type][Weapons_Kinds];	//装備の種類

	/*
	キャラ強化系装備			001

		撃破時に体力回復		001000
		撃破時にゲージ回復		001001
		体力アップ				001002
		ダメージcrit			001003
		弾反射					001004
		ゲージ効率アップ		001005



	自動攻撃装備				002

		全方位弾				002000
		貫通ビーム				002001
		爆弾					002002
		ダメージフィールド展開	002003
		前方広範囲攻撃			002004
		単体高火力				002005
		*/
};