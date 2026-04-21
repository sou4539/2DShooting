#pragma once

class Player;
class Status;
class Control;


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

	Player* m_Player;
	// デバッグ用のステータス
	Status* m_Status;

	Control* m_Control;

public:
	static Scene& GetInstance()
	{
		static Scene instance;
		return instance;
	}
};

#define SCENE Scene::GetInstance()
