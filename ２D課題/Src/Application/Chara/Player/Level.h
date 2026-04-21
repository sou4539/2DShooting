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
	static const int Armor_Slot_Max = 6;	//持てる武器の最大値
	static const int WeaponsKind = 2;		//武器種
	static const int AutoWeapons = 6;		//自動攻撃武器数
	static const int BuffWeapons = 14;		//バフ武器数
	static const int Weapons_Lv_Max = 3;	//武器の最大レベル
	Status* m_status;
	int now_Lv;
	int Lv_Point;
	
	int Armor_Slot[Armor_Slot_Max];
	int Armor_Lv[Armor_Slot_Max];
	
};