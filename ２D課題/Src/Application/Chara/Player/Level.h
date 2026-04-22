#pragma once

class Status;

class Level
{
public:
	Level() { Init(); }
	~Level() {}
	void Init();
	void Update();

private:
	
	/////////////////////////////////////////////////////
	//static const 一覧
	static const int Weapons_Slot_Max = 6;	//持てる武器の最大値
	static const int Weapons_Kind = 2;		//武器種
	static const int Weapons_Auto = 6;		//自動攻撃武器数
	static const int Weapons_Buff = 14;		//バフ武器数
	static const int Weapons_Lv_Max = 3;	//武器の最大レベル
	static const int Weapons_View_Max = 3;	//一回のレベルアップで表示する装備の最大数
	Status* m_status;
	int now_Lv;
	int Lv_Point;
	
	int Armor_Slot[Weapons_Slot_Max];
	int Armor_Lv[Weapons_Lv_Max];
	int Armor_View[Weapons_View_Max];
	int Armor_Kind[Weapons_Kind];
	
};