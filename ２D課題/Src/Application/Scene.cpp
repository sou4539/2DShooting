#include "main.h"
#include "Scene.h"
#include "Chara/Player/Player.h"
#include "Chara/Status.h"
#include "Move/Control/Control.h"

Scene::Scene()
{
	Init();
}
void Scene::Draw2D()
{
	m_Player->Draw();
	// 文字列表示
	SHADER.m_spriteShader.DrawString(0, 0, "Hello World", Math::Vector4(1, 1, 0, 1));
}

void Scene::Update()
{
	m_Player->Update();
	m_Status->Update();
	m_Control->Update();
}

void Scene::Init()
{
	m_Player = new Player();
	m_Status = new Status();
	m_Control = new Control();
	m_Player->Init();
	m_Status->Init();
	m_Control->Init(m_Player, m_Status);
	// 画像の読み込み処理
	//charaTex.Load("player.png");
}

void Scene::Release()
{
	// 画像の解放処理
	m_Player->Release();
	//charaTex.Release();
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
