#include "main.h"
#include "Scene.h"
#include "Chara/Player/Player.h"
#include "Chara/Enemy/Enemy.h"
#include "Chara/Status.h"
#include "Move/Control/Control.h"
#include "Chara/Player/Bullet.h"

Scene::Scene()
{
	Init();
}
void Scene::Draw2D()
{
	m_Player->Draw();
	// 文字列表示
	//SHADER.m_spriteShader.DrawString(0, 0, "Hello World", Math::Vector4(1, 1, 0, 1));
}

void Scene::Update()
{
	m_Player->Update();
	m_Enemy->Update();
	m_Status->Update();
	m_Control->Update();
	m_Bullet->Update();
}

void Scene::Init()
{
	m_Player = new Player();
	m_Enemy = new Enemy();
	m_Status = new Status();
	m_Control = new Control();
	m_Bullet = new Bullet();


	m_Status->Init();
	m_Control->Init(m_Player, m_Status, m_Bullet);
	// 画像の読み込み処理
	//charaTex.Load("player.png");
}

void Scene::Release()
{
	// 画像の解放処理

}

void Scene::ImGuiUpdate()
{
	return;

	ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiSetCond_Once);
	ImGui::SetNextWindowSize(ImVec2(200, 100), ImGuiSetCond_Once);

	// デバッグウィンドウ
	if (ImGui::Begin("Debug Window"))
	{
		ImGui::Text("FPS : %d", APP.m_fps);
	}
	ImGui::End();
}
