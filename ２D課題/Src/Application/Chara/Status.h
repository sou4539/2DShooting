#pragma once

class Status
{
public:
	Status();
	~Status() {}
	void Init();
	void Update();

	const float& GetATK() const { return m_ATK; }
	const float& GetDEF() const { return m_DEF; }
	const float& GetHP() const { return m_HP; }
	const float& GetSPD() const { return m_SPD; }
	const float& GetLV() const { return m_LV; }

private:
	float m_ATK;
	float m_DEF;
	float m_HP;
	float m_SPD;
	float m_LV;
};