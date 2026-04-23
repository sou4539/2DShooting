#pragma once

class Player;
class Enemy;
class Status;
class Control;
class Bullet;


class Scene
{
private:

	// テクスチャ ・・・ 画像データ
	KdTexture charaTex;

	// 行列 ・・・ 座標などの情報
	Math::Matrix matrix;

public:

	// 初期設定
	void Init();

	// 解放
	void Release();

	// 更新処理
	void Update();

	// 描画処理
	void Draw2D();

	// GUI処理
	void ImGuiUpdate();

private:

	Scene();
	// プレイヤー
	Player* m_Player = nullptr;
	// 敵
	Enemy* m_Enemy = nullptr;
	// ステータス
	Status* m_Status = nullptr;
	// 操作
	Control* m_Control = nullptr;
	// 弾
	Bullet* m_Bullet = nullptr;
public:
	static Scene& GetInstance()
	{
		static Scene instance;
		return instance;
	}
};

#define SCENE Scene::GetInstance()
