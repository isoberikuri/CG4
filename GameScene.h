#pragma once
#include "KamataEngine.h"
#include "Effect.h"

//ゲームシーン
class GameScene
{
public:
	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	//初期化
	void Initialize();
	//更新
	void Update();
	//描画
	void Draw();

private:
	// カメラ
	Camera camera_;

	// 3Dモデル エフェクト
	Model* modelEffect_ = nullptr;

	// エフェクト
	std::list<Effect*> effects_;

	// エフェクト発生
	void EffectBorn(KamataEngine::Vector3 position);

};