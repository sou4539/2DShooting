#include "Status.h"

Status::Status()
{
	Init();
}

void Status::Init()
{
	m_ATK = 10.0f;
	m_DEF = 10.0f;
	m_HP = 100.0f;
	m_SPD = 10.0f;
	m_LV = 1.0f;
}

void Status::Update()
{
}
