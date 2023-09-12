#include <Novice.h>

typedef struct vector
{
	float X;
	float Y;
}vector;

typedef struct object
{
	vector position;
	vector velocity;
	float radius;
}object;

enum SCENE
{
	scene0,
	scene1,
	scene2,
	scene3,
	scene4,
	scene5,
	scene6,
	scene7,
	scene8,
	scene9,
	scene10,
	scene11,
	scene12,
	scene13

};

enum BLOCKinfo
{
	None,  //なにもなし
	BLOCK, //ブロック
	BLOCK2,
	BLOCK3,
	BLOCK4,
	BLOCK5
};

struct Vector2
{
	float x;
	float y;
};



const char kWindowTitle[] = "LC1C_20_タナカコウダイ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	int SCENE = scene0;

	unsigned int color = 0x0000ff64;

	int Yes = Novice::LoadTexture("./yes.png");

	int No = Novice::LoadTexture("./no.png");


	int one = Novice::LoadTexture("./one.png");
	int second = Novice::LoadTexture("./second.png");
	int third = Novice::LoadTexture("./third.png");
	int four = Novice::LoadTexture("./four.png");
	int five = Novice::LoadTexture("./five.png");
	int six = Novice::LoadTexture("./six.png");
	int seven = Novice::LoadTexture("./seven.png");
	int eight = Novice::LoadTexture("./eight.png");
	int nine = Novice::LoadTexture("./nine.png");
	int zero = Novice::LoadTexture("./zero.png");

	int ten = Novice::LoadTexture("./ten.png");
	int eleven = Novice::LoadTexture("./eleven.png");
	int twelve = Novice::LoadTexture("./twelve.png");


	//最終問題イラスト
	//アイスクライマー
	int aiceClimber = Novice::LoadTexture("./aiceClimber.png");
	int aiceClimber2 = Novice::LoadTexture("./aiceClimber2.png");

	//アトランチスの謎
	int atoran = Novice::LoadTexture("./atorann.png");
	int atoran2 = Novice::LoadTexture("./atorann2.png");

	//エキサイトバイク
	int bike = Novice::LoadTexture("./bike.png");
	int bike2 = Novice::LoadTexture("./bike2.png");

	//ドンキーコングjr
	int DKjr = Novice::LoadTexture("./DKjr.png");
	int DKjr2 = Novice::LoadTexture("./DKjr2.png");

	//ドンキーコング
	int donki = Novice::LoadTexture("./donki.png");
	int donki2 = Novice::LoadTexture("./donki2.png");

	//グラディウス
	int gura = Novice::LoadTexture("./gura.png");
	int gura2 = Novice::LoadTexture("./gura2.png");

	//ソロモンの鍵
	int kagi = Novice::LoadTexture("./kagi.png");
	int kagi2 = Novice::LoadTexture("./kagi2.png");

	//イーアルカンフー
	int kanhu = Novice::LoadTexture("./kanhu.png");
	int kanhu2 = Novice::LoadTexture("./kanhu2.png");

	//レッキングクルー
	int rekinngu = Novice::LoadTexture("./rekkingu.png");
	int rekinngu2 = Novice::LoadTexture("./rekkingu2.png");

	//スターソルジャー
	int star = Novice::LoadTexture("./star.png");
	int star2 = Novice::LoadTexture("./star2.png");

	//ツインビー
	int twin = Novice::LoadTexture("./twin.png");
	int twin2 = Novice::LoadTexture("./twin2.png");

	//マリオUSA
	int USA = Novice::LoadTexture("./USA.png");
	int USA2 = Novice::LoadTexture("./USA2.png");


	//シーン切り替え
	int Scene = 0;
	//カウントダウン
	int CountTime = 180;
	//問題出している間の時間
	int FlushTime = 180;

	//問題 ランダムにする
	int Question = 0;


	//現在のマウスの座標
	int mauseX = 0;
	int mauseY = 0;

	int mauseX2 = 0;
	int mauseY2 = 0;

	int mauseX3 = 0;
	int mauseY3 = 0;

	int mauseX4 = 0;
	int mauseY4 = 0;


	int mauseX5 = 0;
	int mauseY5 = 0;

	int mauseX6 = 0;
	int mauseY6 = 0;

	int mauseX7 = 0;
	int mauseY7 = 0;

	int mauseX8 = 0;
	int mauseY8 = 0;
	

	int mauseX9 = 0;
	int mauseY9 = 0;

	int mauseX10 = 0;
	int mauseY10 = 0;

	int mauseX11 = 0;
	int mauseY11 = 0;

	int mauseX12 = 0;
	int mauseY12 = 0;


	//ブロックが動くフラグ
	int idouFlag = false;
	int idouFlag2 = false;
	int idouFlag3 = false;
	int idouFlag4 = false;

	int idouFlag5 = false;
	int idouFlag6 = false;
	int idouFlag7 = false;
	int idouFlag8 = false;

	int idouFlag9 = false;
	int idouFlag10 = false;
	int idouFlag11 = false;
	int idouFlag12 = false;


	//回答枠

	int AnswerFalg = false;
	int AnswerFalg2 = false;
	int AnswerFalg3 = false;
	int AnswerFalg4 = false;
	int AnswerFalg5 = false;
	int AnswerFalg6 = false;
	int AnswerFalg7 = false;
	int AnswerFalg8 = false;
	int AnswerFalg9 = false;
	int AnswerFalg10 = false;
	int AnswerFalg11 = false;
	int AnswerFalg12 = false;


	int AnswerEnd = false;
	int AnswerEnd2 = false;
	int AnswerEnd3 = false;
	int AnswerEnd4 = false;
	int AnswerEnd5 = false;
	int AnswerEnd6 = false;
	int AnswerEnd7 = false;
	int AnswerEnd8 = false;
	int AnswerEnd9 = false;
	int AnswerEnd10 = false;
	int AnswerEnd11 = false;
	int AnswerEnd12 = false;

	//
	int SecondAnswerEnd = false;
	int SecondAnswerEnd2 = false;
	int SecondAnswerEnd3 = false;
	int SecondAnswerEnd4 = false;
	int SecondAnswerEnd5 = false;
	int SecondAnswerEnd6 = false;
	int SecondAnswerEnd7 = false;
	int SecondAnswerEnd8 = false;
	int SecondAnswerEnd9 = false;
	int SecondAnswerEnd10 = false;
	int SecondAnswerEnd11 = false;
	int SecondAnswerEnd12 = false;


	//
	int ThirdAnswerEnd = false;
	int ThirdAnswerEnd2 = false;
	int ThirdAnswerEnd3 = false;
	int ThirdAnswerEnd4 = false;
	int ThirdAnswerEnd5 = false;
	int ThirdAnswerEnd6 = false;
	int ThirdAnswerEnd7 = false;
	int ThirdAnswerEnd8 = false;
	int ThirdAnswerEnd9 = false;
	int ThirdAnswerEnd10 = false;
	int ThirdAnswerEnd11 = false;
	int ThirdAnswerEnd12 = false;


	//回答欄
	object box =
	{
		{200,600},
		{0,0},
		100
	};

	object box2 =
	{
		{500,600},
		{0,0},
		100
	};

	object box3 =
	{
		{800,600},
		{0,0},
		60
	};

	object box4 =
	{
		{1100,600},
		{0,0},
		100
	};


	//ノーマルモードから追加
	object box5
	{
		{200,500},
		{0,0},
		100
	};

	object box6
	{
		{500,500},
		{0,0},
		100
	};

	object box7
	{
		{800,500},
		{0,0},
		100
	};

	object box8
	{
		{1100,500},
		{0,0},
		100
	};


	//ハードモード
	object box9
	{
		{200,400},
		{0,0},
		100
	};

	object box10
	{
		{500,400},
		{0,0},
		100
	};

	object box11
	{
		{800,400},
		{0,0},
		100
	};

	object box12
	{
		{1100,400},
		{0,0},
		100
	};




	//回答枠
	object Answer
	{
		{200,100},
		{0,0},
		70
	};

	object Answer2
	{
		{500,100},
		{0,0},
		70
	};

	object Answer3
	{
		{800,100},
		{0,0},
		70
	};

	object Answer4
	{
		{1100,100},
		{0,0},
		70
	};


	object AnswerBoxTrue
	{
		{430,360},
		{0,0},
		100
	};

	object AnswerBoxFalse
	{
		{750,360},
		{0,0},
		100
	};


	int finalTrue = false;
	int finalFalse = false;
	int finalAnswer = false;

	int finalCount = 0;

	int AnswerBoxFlag = false;


	//カウントダウン
	
	int SceneCount = 130;
	int SceneQuestion = 0;

	int SceneFlag = false;


	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///


		switch (SCENE)
		{
		case scene0:

			if (keys[DIK_E] && preKeys[DIK_E] == 0)
			{
				SCENE = scene6;

				//変数初期化
				box.position.X = 200;
				box.position.Y = 600;

				box2.position.X = 500;
				box2.position.Y = 600;

				box3.position.X = 800;
				box3.position.Y = 600;

				box4.position.X = 1100;
				box4.position.Y = 600;

				finalTrue = false;
				finalFalse = false;
				finalAnswer = false;

				SceneCount = 130;
				SceneFlag = false;
				CountTime = 180;
			}


			//ノーマルモード
			if (keys[DIK_N] && preKeys[DIK_N] == 0)
			{
				SCENE = scene7;


				//変数初期化
				box.position.X = 200;
				box.position.Y = 600;

				box2.position.X = 500;
				box2.position.Y = 600;

				box3.position.X = 800;
				box3.position.Y = 600;

				box4.position.X = 1100;
				box4.position.Y = 600;


				box5.position.X = 200;
				box5.position.Y = 500;

				box6.position.X = 500;
				box6.position.Y = 500;

				box7.position.X = 800;
				box7.position.Y = 500;

				box8.position.X = 1100;
				box8.position.Y = 500;

				finalTrue = false;
				finalFalse = false;
				finalAnswer = false;

				SceneCount = 130;
				SceneFlag = false;
				CountTime = 180;
			}

			//ハードモード
			if (keys[DIK_H] && preKeys[DIK_H] == 0)
			{
				SCENE = scene8;


				//変数初期化
				box.position.X = 200;
				box.position.Y = 600;

				box2.position.X = 500;
				box2.position.Y = 600;

				box3.position.X = 800;
				box3.position.Y = 600;

				box4.position.X = 1100;
				box4.position.Y = 600;


				box5.position.X = 200;
				box5.position.Y = 500;

				box6.position.X = 500;
				box6.position.Y = 500;

				box7.position.X = 800;
				box7.position.Y = 500;

				box8.position.X = 1100;
				box8.position.Y = 500;

				box9.position.X = 200;
				box9.position.Y = 400;

				box10.position.X = 500;
				box10.position.Y = 400;

				box11.position.X = 800;
				box11.position.Y = 400;

				box12.position.X = 1100;
				box12.position.Y = 400;

				finalTrue = false;
				finalFalse = false;
				finalAnswer = false;

				SceneCount = 130;
				SceneFlag = false;
				CountTime = 180;

			}


			if (keys[DIK_Q] && preKeys[DIK_Q] == 0)
			{
				SCENE = scene6;

				SceneCount = 130;
				SceneFlag = false;
				CountTime = 180;
			}
			

			break;

		case scene1:

			//イージーモード

			idouFlag = false;
			idouFlag2 = false;
			idouFlag3 = false;
			idouFlag4 = false;


			SceneCount = 180;
			SceneFlag = false;
			CountTime = 180;


			//マウスとブロックの当たり判定
			if (mauseX <= box.position.X + box.radius &&
				box.position.X <= mauseX &&
				mauseY <= box.position.Y + box.radius &&
				box.position.Y <= mauseY)
			{
				Novice::ScreenPrintf(10, 90, "atari");
				idouFlag = true;
			}

			//左から2番目
			if (mauseX2 <= box2.position.X + box2.radius &&
				box2.position.X <= mauseX2 &&
				mauseY2 <= box2.position.Y + box2.radius &&
				box2.position.Y <= mauseY2)
			{
				Novice::ScreenPrintf(10, 110, "atari");
				idouFlag2 = true;
			}

			//左から3番目
			if (mauseX3 <= box3.position.X + box3.radius &&
				box3.position.X <= mauseX3 &&
				mauseY3 <= box3.position.Y + box3.radius &&
				box3.position.Y <= mauseY3)
			{
				Novice::ScreenPrintf(10, 130, "atari");
				idouFlag3 = true;
			}

			//一番右
			if (mauseX4 <= box4.position.X + box4.radius &&
				box4.position.X <= mauseX4 &&
				mauseY4 <= box4.position.Y + box4.radius &&
				box4.position.Y <= mauseY4)
			{
				Novice::ScreenPrintf(10, 150, "atari");
				idouFlag4 = true;
			}


			//当たってる時にボタンが押されたら
			if (idouFlag == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box.position.X = mauseX - 30;
					box.position.Y = mauseY - 30;

					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;
				}
			}

			//左から2番目
			if (idouFlag2 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box2.position.X = mauseX2 - 30;
					box2.position.Y = mauseY2 - 30;

					idouFlag = false;
					idouFlag3 = false;
					idouFlag4 = false;
				}
			}

			//左から3番目
			if (idouFlag3 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box3.position.X = mauseX3 - 30;
					box3.position.Y = mauseY3 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag4 = false;
				}
			}

			//一番右
			if (idouFlag4 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box4.position.X = mauseX4 - 30;
					box4.position.Y = mauseY4 - 30;

					//他の物を持たないフラグ
					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
				}
			}



			//答えはめる型の判定
			//一番左の正解
			if (Answer.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(10, 200, "iine");
				AnswerFalg = true;
			}

			//左から2番目の正解
			if (Answer2.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(10, 220, "iine");
				AnswerFalg2 = true;
			}

			//左から3番目の正解
			if (Answer3.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(10, 240, "iine");
				AnswerFalg3 = true;
			}

			//一番右の正解
			if (Answer4.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(10, 260, "iine");
				AnswerFalg4 = true;
			}



			//不正解だったら
			//もし違うところにあてはめてボタンを押したら、

			//一番左の回答欄バージョン
			if (Answer.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 200, "owari");
				AnswerEnd = true;
			}

			if (Answer.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 220, "owari");
				AnswerEnd2 = true;
			}

			if (Answer.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 240, "owari");
				AnswerEnd3 = true;
			}


			//左から2番目の回答欄バージョン
			if (Answer2.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 200, "owari");
				AnswerEnd4 = true;
			}

			if (Answer2.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				AnswerEnd5 = true;
			}

			if (Answer2.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				AnswerEnd6 = true;
				
			}


			//左から3番目の回答欄バージョン
			if (Answer3.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 200, "owari");
				AnswerEnd7 = true;
				
			}

			if (Answer3.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 220, "owari");
				AnswerEnd8 = true;
				
			}

			if (Answer3.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 240, "owari");
				AnswerEnd9 = true;
				
			}


			//一番右の回答欄バージョン
			if (Answer4.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 200, "owari");
				AnswerEnd10 = true;
				
			}

			if (Answer4.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 220, "owari");
				AnswerEnd11 = true;
				
			}

			if (Answer4.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 240, "owari");
				AnswerEnd12 = true;
				
			}


			//不正解だったらシーン遷移
			if (AnswerEnd == true)
			{
				AnswerFalg = false;
				AnswerFalg2 = false;
				AnswerFalg3 = false;
				AnswerFalg4 = false;
			}

			if (AnswerFalg || AnswerFalg2 || AnswerFalg3 || AnswerFalg4 == false)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalAnswer = true;
				}

				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene1;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}

				if (finalAnswer == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene5;
						}
					}
				}
			}

			//正解だったらシーン遷移
			if (AnswerFalg && AnswerFalg2 && AnswerFalg3 && AnswerFalg4 == true)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalTrue = true;
				}

				if (finalTrue == true)
				{

					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "clear");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene2;
						}
					}
				}
			}

			

			//マウス
			Novice::GetMousePosition(&mauseX, &mauseY);
			Novice::GetMousePosition(&mauseX2, &mauseY2);
			Novice::GetMousePosition(&mauseX3, &mauseY3);
			Novice::GetMousePosition(&mauseX4, &mauseY4);

			break;

		case scene2:

			//正解画面

			//最初に戻る
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SCENE = scene0;
			}

			break;

		case scene3:


			//ノーマルモード

			idouFlag = false;
			idouFlag2 = false;
			idouFlag3 = false;
			idouFlag4 = false;

			idouFlag5 = false;
			idouFlag6 = false;
			idouFlag7 = false;
			idouFlag8 = false;

			SceneCount = 130;
			SceneFlag = false;
			CountTime = 180;


			//マウスとブロックの当たり判定

			if (mauseX <= box.position.X + box.radius &&
				box.position.X <= mauseX &&
				mauseY <= box.position.Y + box.radius &&
				box.position.Y <= mauseY)
			{
				Novice::ScreenPrintf(10, 90, "atari");
				idouFlag = true;
			}

			//左から2番目
			if (mauseX2 <= box2.position.X + box2.radius &&
				box2.position.X <= mauseX2 &&
				mauseY2 <= box2.position.Y + box2.radius &&
				box2.position.Y <= mauseY2)
			{
				Novice::ScreenPrintf(10, 110, "atari");
				idouFlag2 = true;
			}

			//左から3番目
			if (mauseX3 <= box3.position.X + box3.radius &&
				box3.position.X <= mauseX3 &&
				mauseY3 <= box3.position.Y + box3.radius &&
				box3.position.Y <= mauseY3)
			{
				Novice::ScreenPrintf(10, 130, "atari");
				idouFlag3 = true;
			}

			//一番右
			if (mauseX4 <= box4.position.X + box4.radius &&
				box4.position.X <= mauseX4 &&
				mauseY4 <= box4.position.Y + box4.radius &&
				box4.position.Y <= mauseY4)
			{
				Novice::ScreenPrintf(10, 150, "atari");
				idouFlag4 = true;
			}


			//上の段
			if (mauseX5 <= box5.position.X + box5.radius &&
				box5.position.X <= mauseX5 &&
				mauseY5 <= box5.position.Y + box5.radius &&
				box5.position.Y <= mauseY5)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag5 = true;
			}

			if (mauseX6 <= box6.position.X + box6.radius &&
				box6.position.X <= mauseX6 &&
				mauseY6 <= box6.position.Y + box6.radius &&
				box6.position.Y <= mauseY6)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag6 = true;
			}

			if (mauseX7 <= box7.position.X + box7.radius &&
				box7.position.X <= mauseX7 &&
				mauseY7 <= box7.position.Y + box7.radius &&
				box7.position.Y <= mauseY7)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag7 = true;
			}

			if (mauseX8 <= box8.position.X + box8.radius &&
				box8.position.X <= mauseX8 &&
				mauseY8 <= box8.position.Y + box8.radius &&
				box8.position.Y <= mauseY8)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag8 = true;
			}




			//当たってる時にボタンが押されたら
			if (idouFlag == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box.position.X = mauseX - 30;
					box.position.Y = mauseY - 30;

					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;
				}
			}

			//左から2番目
			if (idouFlag2 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box2.position.X = mauseX2 - 30;
					box2.position.Y = mauseY2 - 30;

					idouFlag = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;
				}
			}

			//左から3番目
			if (idouFlag3 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box3.position.X = mauseX3 - 30;
					box3.position.Y = mauseY3 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;
				}
			}

			//一番右
			if (idouFlag4 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box4.position.X = mauseX4 - 30;
					box4.position.Y = mauseY4 - 30;

					//他の物を持たないフラグ
					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;
				}
			}


			//二段目の当たり判定
			if (idouFlag5 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box5.position.X = mauseX5 - 30;
					box5.position.Y = mauseY5 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;
				}
			}

			if (idouFlag6 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box6.position.X = mauseX6 - 30;
					box6.position.Y = mauseY6 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag7 = false;
					idouFlag8 = false;
				}
			}

			if (idouFlag7 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box7.position.X = mauseX7 - 30;
					box7.position.Y = mauseY7 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag8 = false;
				}
			}

			if (idouFlag8 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box8.position.X = mauseX8 - 30;
					box8.position.Y = mauseY8 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
				}
			}


			//答えはめる型の判定
			//一番左の正解
			if (Answer.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(10, 200, "iine");
				AnswerFalg = true;
				
			}

			//左から2番目の正解
			if (Answer2.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(10, 220, "iine");
				AnswerFalg2 = true;
				
			}

			//左から3番目の正解
			if (Answer3.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(10, 240, "iine");
				AnswerFalg3 = true;
				
			}

			//一番右の正解
			if (Answer4.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(10, 260, "iine");
				AnswerFalg4 = true;
				
			}


			//二段目の当たり判定
			if (Answer.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 200, "iine");
				AnswerFalg5 = true;
				
			}

			if (Answer2.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(30, 220, "iine");
				AnswerFalg6 = true;
				
			}

			if (Answer3.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(30, 240, "iine");
				AnswerFalg7 = true;
			}

			if (Answer4.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(30, 260, "iine");
				AnswerFalg8 = true;
			}




			//不正解だったら
			//もし違うところにあてはめてボタンを押したら、

			//一番左の回答欄バージョン
			if (Answer.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 200, "owari");
				AnswerEnd = true;
				
			}

			if (Answer.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 220, "owari");
				AnswerEnd2 = true;
				
			}

			if (Answer.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 240, "owari");
				AnswerEnd3 = true;
				
			}


			//左から2番目の回答欄バージョン
			if (Answer2.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer2.position.Y + Answer2.radius)
			{

				Novice::ScreenPrintf(10, 200, "iine");
				AnswerFalg = true;
				
			}

			if (Answer2.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				AnswerEnd5 = true;
				
			}

			if (Answer2.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				AnswerEnd6 = true;
				
			}


			//左から3番目の回答欄バージョン
			if (Answer3.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 200, "owari");
				AnswerEnd7 = true;
				
			}

			if (Answer3.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer3.position.Y + Answer3.radius)
			{

				Novice::ScreenPrintf(10, 220, "iine");
				AnswerFalg2 = true;
				
			}

			if (Answer3.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 240, "owari");
				AnswerEnd9 = true;
			}


			//一番右の回答欄バージョン
			if (Answer4.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 200, "owari");
				AnswerEnd10 = true;
				
			}

			if (Answer4.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 220, "owari");
				AnswerEnd11 = true;
				
			}

			if (Answer4.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 240, "owari");
				AnswerEnd12 = true;
				
			}


			//二段目の判定

			if (Answer.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 200, "owari");
				SecondAnswerEnd = true;
				
			}

			if (Answer.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 220, "owari");
				SecondAnswerEnd2 = true;
				
			}

			if (Answer.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 240, "owari");
				SecondAnswerEnd3 = true;
				
			}


			//二段目の左から2番目

			if (Answer2.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 200, "owari");
				SecondAnswerEnd4 = true;
				
			}

			if (Answer2.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				SecondAnswerEnd5 = true;
				
			}

			if (Answer2.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd6 = true;
			}


			//二段目の3番目
			if (Answer3.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(70, 200, "owari");
				SecondAnswerEnd7 = true;
			}

			if (Answer3.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				SecondAnswerEnd8 = true;
			}

			if (Answer3.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd9 = true;
			}

			//二段目の一番右
			if (Answer4.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd10 = true;
			}

			if (Answer4.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd11 = true;
			}

			if (Answer4.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd12 = true;
			}


			//不正解だったらシーン遷移
			if (AnswerEnd == true)
			{
				AnswerFalg = false;
				AnswerFalg2 = false;
				AnswerFalg3 = false;
				AnswerFalg4 = false;
			}

			if (SecondAnswerEnd == true)
			{
				AnswerFalg5 = false;
				AnswerFalg6 = false;
				AnswerFalg7 = false;
				AnswerFalg8 = false;
			}


			if (AnswerFalg || AnswerFalg2 || AnswerFalg3 || AnswerFalg4 == false)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalAnswer = true;
				}

				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene3;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}

				if (finalAnswer == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene5;
						}
					}
				}

			}

			if (AnswerFalg5 || AnswerFalg6 || AnswerFalg7 || AnswerFalg8 == false)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalAnswer = true;
				}

				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene3;

							finalFalse = false;
							finalTrue = false;
						}
					}
				}

				if (finalAnswer == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene5;
						}
					}
				}

			}


			//正解だったらシーン遷移
			if (AnswerFalg5 && AnswerFalg && AnswerFalg2 && AnswerFalg8 == true)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalTrue = true;
				}

				if (finalTrue == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "clear");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene2;
						}
					}
				}
			}


			//マウス
			Novice::GetMousePosition(&mauseX, &mauseY);
			Novice::GetMousePosition(&mauseX2, &mauseY2);
			Novice::GetMousePosition(&mauseX3, &mauseY3);
			Novice::GetMousePosition(&mauseX4, &mauseY4);

			Novice::GetMousePosition(&mauseX5, &mauseY5);
			Novice::GetMousePosition(&mauseX6, &mauseY6);
			Novice::GetMousePosition(&mauseX7, &mauseY7);
			Novice::GetMousePosition(&mauseX8, &mauseY8);


			break;

		case scene4:

			//ハードモード

			idouFlag = false;
			idouFlag2 = false;
			idouFlag3 = false;
			idouFlag4 = false;

			idouFlag5 = false;
			idouFlag6 = false;
			idouFlag7 = false;
			idouFlag8 = false;

			idouFlag9 = false;
			idouFlag10 = false;
			idouFlag11 = false;
			idouFlag12 = false;

			SceneCount = 130;
			SceneFlag = false;
			CountTime = 180;

			//マウスとブロックの当たり判定

			if (mauseX <= box.position.X + box.radius &&
				box.position.X <= mauseX &&
				mauseY <= box.position.Y + box.radius &&
				box.position.Y <= mauseY)
			{
				Novice::ScreenPrintf(10, 90, "atari");
				idouFlag = true;
			}

			//左から2番目
			if (mauseX2 <= box2.position.X + box2.radius &&
				box2.position.X <= mauseX2 &&
				mauseY2 <= box2.position.Y + box2.radius &&
				box2.position.Y <= mauseY2)
			{
				Novice::ScreenPrintf(10, 110, "atari");
				idouFlag2 = true;
			}

			//左から3番目
			if (mauseX3 <= box3.position.X + box3.radius &&
				box3.position.X <= mauseX3 &&
				mauseY3 <= box3.position.Y + box3.radius &&
				box3.position.Y <= mauseY3)
			{
				Novice::ScreenPrintf(10, 130, "atari");
				idouFlag3 = true;
			}

			//一番右
			if (mauseX4 <= box4.position.X + box4.radius &&
				box4.position.X <= mauseX4 &&
				mauseY4 <= box4.position.Y + box4.radius &&
				box4.position.Y <= mauseY4)
			{
				Novice::ScreenPrintf(10, 150, "atari");
				idouFlag4 = true;
			}


			//上の段
			if (mauseX5 <= box5.position.X + box5.radius &&
				box5.position.X <= mauseX5 &&
				mauseY5 <= box5.position.Y + box5.radius &&
				box5.position.Y <= mauseY5)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag5 = true;
			}

			if (mauseX6 <= box6.position.X + box6.radius &&
				box6.position.X <= mauseX6 &&
				mauseY6 <= box6.position.Y + box6.radius &&
				box6.position.Y <= mauseY6)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag6 = true;
			}

			if (mauseX7 <= box7.position.X + box7.radius &&
				box7.position.X <= mauseX7 &&
				mauseY7 <= box7.position.Y + box7.radius &&
				box7.position.Y <= mauseY7)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag7 = true;
			}

			if (mauseX8 <= box8.position.X + box8.radius &&
				box8.position.X <= mauseX8 &&
				mauseY8 <= box8.position.Y + box8.radius &&
				box8.position.Y <= mauseY8)
			{
				Novice::ScreenPrintf(30, 90, "atari");
				idouFlag8 = true;
			}


			//一番上の段
			if (mauseX9 <= box9.position.X + box9.radius &&
				box9.position.X <= mauseX9 &&
				mauseY9 <= box9.position.Y + box9.radius &&
				box9.position.Y <= mauseY9)
			{
				Novice::ScreenPrintf(50, 90, "atari");
				idouFlag9 = true;
			}

			if (mauseX10 <= box10.position.X + box10.radius &&
				box10.position.X <= mauseX10 &&
				mauseY10 <= box10.position.Y + box10.radius &&
				box10.position.Y <= mauseY10)
			{
				Novice::ScreenPrintf(50, 90, "atari");
				idouFlag10 = true;
			}

			if (mauseX11 <= box11.position.X + box11.radius &&
				box11.position.X <= mauseX11 &&
				mauseY11 <= box11.position.Y + box11.radius &&
				box11.position.Y <= mauseY11)
			{
				Novice::ScreenPrintf(50, 90, "atari");
				idouFlag11 = true;
			}

			if (mauseX12 <= box12.position.X + box12.radius &&
				box12.position.X <= mauseX12 &&
				mauseY12 <= box12.position.Y + box12.radius &&
				box12.position.Y <= mauseY12)
			{
				Novice::ScreenPrintf(50, 90, "atari");
				idouFlag12 = true;
			}




			//当たってる時にボタンが押されたら
			if (idouFlag == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box.position.X = mauseX - 30;
					box.position.Y = mauseY - 30;

					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;

				}
			}

			//左から2番目
			if (idouFlag2 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box2.position.X = mauseX2 - 30;
					box2.position.Y = mauseY2 - 30;

					idouFlag = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			//左から3番目
			if (idouFlag3 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box3.position.X = mauseX3 - 30;
					box3.position.Y = mauseY3 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			//一番右
			if (idouFlag4 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box4.position.X = mauseX4 - 30;
					box4.position.Y = mauseY4 - 30;

					//他の物を持たないフラグ
					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}


			//二段目の当たり判定
			if (idouFlag5 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box5.position.X = mauseX5 - 30;
					box5.position.Y = mauseY5 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag6 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box6.position.X = mauseX6 - 30;
					box6.position.Y = mauseY6 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag7 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box7.position.X = mauseX7 - 30;
					box7.position.Y = mauseY7 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag8 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box8.position.X = mauseX8 - 30;
					box8.position.Y = mauseY8 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag9 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box9.position.X = mauseX9 - 30;
					box9.position.Y = mauseY9 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag10 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box10.position.X = mauseX10 - 30;
					box10.position.Y = mauseY10 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					//idouFlag10 = false;
					idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag11 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box11.position.X = mauseX11 - 30;
					box11.position.Y = mauseY11 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					//idouFlag11 = false;
					idouFlag12 = false;
				}
			}

			if (idouFlag12 == true)
			{
				if (Novice::IsPressMouse(0))
				{
					box12.position.X = mauseX12 - 30;
					box12.position.Y = mauseY12 - 30;

					idouFlag = false;
					idouFlag2 = false;
					idouFlag3 = false;
					idouFlag4 = false;

					idouFlag5 = false;
					idouFlag6 = false;
					idouFlag7 = false;
					idouFlag8 = false;

					idouFlag9 = false;
					idouFlag10 = false;
					idouFlag11 = false;
					//idouFlag12 = false;
				}
			}



			//答えはめる型の判定
			//一番左の正解
			if (Answer.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(10, 200, "iine");
				AnswerFalg = true;
			}

			//左から2番目の正解
			if (Answer2.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(10, 220, "iine");
				AnswerFalg2 = true;
			}

			//左から3番目の正解
			if (Answer3.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(10, 240, "iine");
				AnswerFalg3 = true;
				if (AnswerFalg3 == true);
			}

			//一番右の正解
			if (Answer4.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(10, 260, "iine");
				AnswerFalg4 = true;
			}


			//二段目の当たり判定
			if (Answer.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 200, "iine");
				AnswerFalg5 = true;
			}

			if (Answer2.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(30, 220, "iine");
				AnswerFalg6 = true;
			}

			if (Answer3.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(30, 240, "iine");
				AnswerFalg7 = true;
			}

			if (Answer4.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(30, 260, "iine");
				AnswerFalg8 = true;
			}


			//一番上の段
			if (Answer.position.X <= box9.position.X + box9.radius &&
				box9.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box9.position.Y + box9.radius &&
				box9.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 200, "iine");
				AnswerFalg9 = true;
			}

			if (Answer2.position.X <= box10.position.X + box10.radius &&
				box10.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box10.position.Y + box10.radius &&
				box10.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(50, 220, "iine");
				AnswerFalg10 = true;
			}

			if (Answer3.position.X <= box11.position.X + box11.radius &&
				box11.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box11.position.Y + box11.radius &&
				box11.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(50, 240, "iine");
				AnswerFalg11 = true;
			}

			if (Answer4.position.X <= box12.position.X + box12.radius &&
				box12.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box12.position.Y + box12.radius &&
				box12.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(50, 260, "iine");
				AnswerFalg12 = true;
			}



			//不正解だったら
			//もし違うところにあてはめてボタンを押したら、

			//一番左の回答欄バージョン
			if (Answer.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 200, "iine");
				//AnswerEnd = true;

				AnswerFalg2 = true;
			}

			if (Answer.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 220, "owari");
				AnswerEnd2 = true;
			}

			if (Answer.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 240, "owari");
				AnswerEnd3 = true;
			}


			//左から2番目の回答欄バージョン
			if (Answer2.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				//Novice::ScreenPrintf(70, 200, "owari");
				//AnswerEnd4 = true;

				Novice::ScreenPrintf(10, 200, "iine");
				AnswerFalg = true;
			}

			if (Answer2.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 220, "iine");
				//AnswerEnd5 = true;

				AnswerFalg3 = true;
			}

			if (Answer2.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				AnswerEnd6 = true;
				
			}


			//左から3番目の回答欄バージョン
			if (Answer3.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 200, "owari");
				AnswerEnd7 = true;
				
			}

			if (Answer3.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				//Novice::ScreenPrintf(110, 220, "owari");
				//AnswerEnd8 = true;

				Novice::ScreenPrintf(10, 220, "iine");
				AnswerFalg2 = true;
				
			}

			if (Answer3.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 240, "owari");
				AnswerEnd9 = true;
				
			}


			//一番右の回答欄バージョン
			if (Answer4.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 200, "owari");
				AnswerEnd10 = true;
				
			}

			if (Answer4.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 220, "owari");
				AnswerEnd11 = true;
				
			}

			if (Answer4.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 240, "owari");
				AnswerEnd12 = true;
				
			}


			//二段目の判定

			if (Answer.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 200, "owari");
				SecondAnswerEnd = true;
				
			}

			if (Answer.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 220, "owari");
				SecondAnswerEnd2 = true;
				
			}

			if (Answer.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(50, 240, "owari");
				SecondAnswerEnd3 = true;
				
			}


			//二段目の左から2番目

			if (Answer2.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 200, "iine");
				//SecondAnswerEnd4 = true;

				AnswerFalg5 = true;
				
			}

			if (Answer2.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				SecondAnswerEnd5 = true;
				
			}

			if (Answer2.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd6 = true;
			}


			//二段目の3番目
			if (Answer3.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(70, 200, "owari");

				SecondAnswerEnd7 = true;
			}

			if (Answer3.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				SecondAnswerEnd8 = true;
			}

			if (Answer3.position.X <= box8.position.X + box8.radius &&
				box8.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box8.position.Y + box8.radius &&
				box8.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd9 = true;
			}

			//二段目の一番右
			if (Answer4.position.X <= box5.position.X + box5.radius &&
				box5.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box5.position.Y + box5.radius &&
				box5.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd10 = true;
				
			}

			if (Answer4.position.X <= box6.position.X + box6.radius &&
				box6.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box6.position.Y + box6.radius &&
				box6.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(70, 240, "iine");

				AnswerFalg6 = true;
			}

			if (Answer4.position.X <= box7.position.X + box7.radius &&
				box7.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box7.position.Y + box7.radius &&
				box7.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				SecondAnswerEnd12 = true;
			}


			//一番上の段
			if (Answer.position.X <= box10.position.X + box10.radius &&
				box10.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box10.position.Y + box10.radius &&
				box10.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(90, 200, "owari");
				ThirdAnswerEnd = true;
			}

			if (Answer.position.X <= box11.position.X + box11.radius &&
				box11.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box11.position.Y + box11.radius &&
				box11.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(90, 220, "owari");
				ThirdAnswerEnd2 = true;
			}

			if (Answer.position.X <= box12.position.X + box12.radius &&
				box12.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box12.position.Y + box12.radius &&
				box12.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(90, 240, "owari");
				ThirdAnswerEnd3 = true;
			}


			//左から2番目
			if (Answer2.position.X <= box9.position.X + box9.radius &&
				box9.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box9.position.Y + box9.radius &&
				box9.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(110, 200, "owari");
				ThirdAnswerEnd4 = true;
			}

			if (Answer2.position.X <= box11.position.X + box11.radius &&
				box11.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box11.position.Y + box11.radius &&
				box11.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(110, 220, "owari");
				ThirdAnswerEnd5 = true;
			}

			if (Answer2.position.X <= box12.position.X + box12.radius &&
				box12.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box12.position.Y + box12.radius &&
				box12.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(110, 240, "owari");
				ThirdAnswerEnd6 = true;
			}


			//左から3番目
			if (Answer3.position.X <= box9.position.X + box9.radius &&
				box9.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box9.position.Y + box9.radius &&
				box9.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 200, "owari");
				ThirdAnswerEnd7 = true;
			}

			if (Answer3.position.X <= box10.position.X + box10.radius &&
				box10.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box10.position.Y + box10.radius &&
				box10.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 220, "owari");
				ThirdAnswerEnd8 = true;
			}

			if (Answer3.position.X <= box12.position.X + box12.radius &&
				box12.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box12.position.Y + box12.radius &&
				box12.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 240, "owari");
				ThirdAnswerEnd9 = true;
			}


			//一番右
			if (Answer4.position.X <= box9.position.X + box9.radius &&
				box9.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box9.position.Y + box9.radius &&
				box9.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(130, 200, "owari");
				ThirdAnswerEnd10 = true;
			}

			if (Answer4.position.X <= box10.position.X + box10.radius &&
				box10.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box10.position.Y + box10.radius &&
				box10.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(130, 220, "owari");
				ThirdAnswerEnd11 = true;
			}

			if (Answer4.position.X <= box11.position.X + box11.radius &&
				box11.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box11.position.Y + box11.radius &&
				box11.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(130, 240, "owari");
				ThirdAnswerEnd12 = true;
			}


			//不正解だったらシーン遷移
			if (AnswerEnd == true)
			{
				AnswerFalg = false;
				AnswerFalg2 = false;
				AnswerFalg3 = false;
				AnswerFalg4 = false;
			}

			//ノーマルモード
			if (SecondAnswerEnd == true)
			{
				AnswerFalg5 = false;
				AnswerFalg6 = false;
				AnswerFalg7 = false;
				AnswerFalg8 = false;
			}

			//ハードモード
			if (ThirdAnswerEnd == true)
			{
				AnswerFalg9 = false;
				AnswerFalg10 = false;
				AnswerFalg11 = false;
				AnswerFalg12 = false;
			}


			//不正解画面へシーン遷移
			if (AnswerFalg || AnswerFalg2 || AnswerFalg3 || AnswerFalg4 == false)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalAnswer = true;
				}

				//Noが押されたら
				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene4;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}


				//間違えてる状態でYesが押されたら
				if (finalAnswer == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene5;
						}
					}
				}

			}

			if (AnswerFalg5 || AnswerFalg6 || AnswerFalg7 || AnswerFalg8 == false)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalAnswer = true;
				}

				//Noが押されたら
				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene4;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}


				//間違えてる状態でYesが押されたら
				if (finalAnswer == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene5;
						}
					}
				}

			}

			if (AnswerFalg9 || AnswerFalg10 || AnswerFalg11 || AnswerFalg12 == false)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalAnswer = true;
				}

				//Noが押されたら
				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene4;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}


				//間違えてる状態でYesが押されたら
				if (finalAnswer == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "end");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene5;
						}
					}
				}
			}

			
			//正解だったらシーン遷移
			if (AnswerFalg2 && AnswerFalg3 && AnswerFalg5 && AnswerFalg6 == true)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					finalFalse = true;
					finalTrue = true;
				}

				//Noが押されたら
				if (finalFalse == true)
				{
					Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxFalse.position.X + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.X <= mauseX &&
						mauseY <= AnswerBoxFalse.position.Y + AnswerBoxFalse.radius &&
						AnswerBoxFalse.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 520, "clear");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene4;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}

				if (finalTrue == true)
				{
					Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);

					//最後の確認
					if (mauseX <= AnswerBoxTrue.position.X + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.X <= mauseX &&
						mauseY <= AnswerBoxTrue.position.Y + AnswerBoxTrue.radius &&
						AnswerBoxTrue.position.Y <= mauseY)
					{
						Novice::ScreenPrintf(100, 500, "clear");

						if (Novice::IsTriggerMouse(0))
						{
							SCENE = scene2;

							finalFalse = false;
							finalTrue = false;
							finalAnswer = false;
						}
					}
				}
			}


			//マウス
			Novice::GetMousePosition(&mauseX, &mauseY);
			Novice::GetMousePosition(&mauseX2, &mauseY2);
			Novice::GetMousePosition(&mauseX3, &mauseY3);
			Novice::GetMousePosition(&mauseX4, &mauseY4);

			Novice::GetMousePosition(&mauseX5, &mauseY5);
			Novice::GetMousePosition(&mauseX6, &mauseY6);
			Novice::GetMousePosition(&mauseX7, &mauseY7);
			Novice::GetMousePosition(&mauseX8, &mauseY8);

			Novice::GetMousePosition(&mauseX9, &mauseY9);
			Novice::GetMousePosition(&mauseX10, &mauseY10);
			Novice::GetMousePosition(&mauseX11, &mauseY11);
			Novice::GetMousePosition(&mauseX12, &mauseY12);

			break;

		case scene5:

			//不正解画面

			//最初に戻る
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SCENE = scene0;
			}

			break;

		case scene6:


			//イージーモード問題

			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SceneFlag = true;
			}

			//CountTimeの中身描画


			//準備のカウント
			if (SceneFlag == true)
			{
				CountTime--;

				if (CountTime <= 180 && CountTime >= 121) 
				{
					Novice::DrawSprite(640, 360, third, 1, 1, 0.0f, WHITE);
				}

				if (CountTime <= 120 && CountTime >= 61) 
				{
					Novice::DrawSprite(640, 360, second, 1, 1, 0.0f, WHITE);
				}

				if (CountTime <= 60 && CountTime >= 1) 
				{
					Novice::DrawSprite(640, 360, one, 1, 1, 0.0f, WHITE);
				}
			}


			//問題画面
			if (CountTime <= 0)
			{
				Novice::DrawBox(0, 0, 1280, 720, 0.0f, WHITE, kFillModeSolid);

				
				SceneCount--;


				if (SceneCount <= 120 && SceneCount >= 111)
				{
					Novice::DrawSprite(640, 360, one, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 110 && SceneCount >= 101)
				{
					Novice::DrawSprite(640, 360, second, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 100 && SceneCount >= 91)
				{
					Novice::DrawSprite(640, 360, third, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 90 && SceneCount >= 81)
				{
					Novice::DrawSprite(640, 360, four, 1, 1, 0.0f, WHITE);
				}

				SceneFlag = false;
			}


			if (SceneCount <= 0)
			{
				SCENE = scene1;
			}


			//最初に戻る
			if (keys[DIK_RETURN] && preKeys[DIK_RETURN] == 0)
			{
				SCENE = scene0;
			}

			break;


		case scene7:


			//ノーマルモード

			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SceneFlag = true;
			}

			//CountTimeの中身描画


			//準備のカウント
			if (SceneFlag == true)
			{
				CountTime--;

				if (CountTime <= 180 && CountTime >= 121)
				{
					Novice::DrawSprite(640, 360, third, 1, 1, 0.0f, WHITE);
				}

				if (CountTime <= 120 && CountTime >= 61)
				{
					Novice::DrawSprite(640, 360, second, 1, 1, 0.0f, WHITE);
				}

				if (CountTime <= 60 && CountTime >= 1)
				{
					Novice::DrawSprite(640, 360, one, 1, 1, 0.0f, WHITE);
				}
			}


			//問題画面
			if (CountTime <= 0)
			{
				Novice::DrawBox(0, 0, 1280, 720, 0.0f, WHITE, kFillModeSolid);

				
				SceneCount--;


				if (SceneCount <= 120 && SceneCount >= 115)
				{
					Novice::DrawSprite(640, 360, five, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 114 && SceneCount >= 109)
				{
					Novice::DrawSprite(640, 360, one, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 108 && SceneCount >= 103)
				{
					Novice::DrawSprite(640, 360, second, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 102 && SceneCount >= 97)
				{
					Novice::DrawSprite(640, 360, eight, 1, 1, 0.0f, WHITE);
				}

				SceneFlag = false;
			}


			if (SceneCount <= 0)
			{
				SCENE = scene3;
			}

			//最初に戻る
			if (keys[DIK_RETURN] && preKeys[DIK_RETURN] == 0)
			{
				SCENE = scene0;
			}

			break;

		case scene8:


			//ファミコンゲーム
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SceneFlag = true;
			}


			//準備のカウント
			if (SceneFlag == true)
			{
				CountTime--;

				if (CountTime <= 180 && CountTime >= 121)
				{
					Novice::DrawSprite(640, 360, third, 1, 1, 0.0f, WHITE);
				}

				if (CountTime <= 120 && CountTime >= 61)
				{
					Novice::DrawSprite(640, 360, second, 1, 1, 0.0f, WHITE);
				}

				if (CountTime <= 60 && CountTime >= 1)
				{
					Novice::DrawSprite(640, 360, one, 1, 1, 0.0f, WHITE);
				}
			}


			//問題画面
			if (CountTime <= 0)
			{
				Novice::DrawBox(0, 0, 1280, 720, 0.0f, WHITE, kFillModeSolid);
				
				SceneCount--;


				if (SceneCount <= 120 && SceneCount >= 111)
				{
					Novice::DrawSprite(320, 100, atoran, 1, 1, 0.0f, WHITE);

				}

				if (SceneCount <= 110 && SceneCount >= 101)
				{
					
					Novice::DrawSprite(320, 100, kanhu, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 100 && SceneCount >= 91)
				{
					
					Novice::DrawSprite(320, 100, kagi2, 1, 1, 0.0f, WHITE);
				}

				if (SceneCount <= 90 && SceneCount >= 81)
				{
					
					Novice::DrawSprite(320, 100, gura, 1, 1, 0.0f, WHITE);
				}

				SceneFlag = false;
			}


			if (SceneCount <= 0)
			{
				SCENE = scene4;
			}


			//最初に戻る
			if (keys[DIK_RETURN] && preKeys[DIK_RETURN] == 0)
			{
				SCENE = scene0;
			}


			break;

		}

		/*
		
		switch (Scene)
		{
		case 0://タイトル

			CountTime = 180;
			FlushTime = 180;

			if (keys[DIK_SPACE]) {
				Scene = 1;
			}

			break;

		case 1://問題前のカウントダウン

			break;
		case 2://問題

			break;
		case 3://回答画面

			break;
		}
		

		//問題前のカウントダウン
		if (Scene == 1) {

			//問題前のカウントダウン
			CountTime -= 1;
			if (CountTime <= 0) {
				Scene = 2;
			}

		}

		//問題出題中のカウントダウン
		if(Scene == 2) {

		//問題出題中のカウントが0になったらScene3になる
			FlushTime -= 1;
			if (FlushTime <= 0) {
				Scene = 3;
			}

		}


		//ランダム試す
		if (keys[DIK_RETURN] != 0 && preKeys[DIK_RETURN] == 0) {
			Question = rand() % 10000;
		}
		if (Scene == 0) {
			//Novice::ScreenPrintf(300, 300, "%d", Question);
			//数字四桁ランダム
			Question = rand() % 10000;
		}
		
		
		
		*/



		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		switch (SCENE)
		{
		case scene0:

			//オープニング

			Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK, kFillModeSolid);

			Novice::ScreenPrintf(0, 20, "ModeSelect");

			Novice::ScreenPrintf(0, 50, "push E key easyMode");

			Novice::ScreenPrintf(0, 70, "push N key nomarlMode");

			Novice::ScreenPrintf(0, 90, "push H key hardMode");
			

			break;

		case scene1:


			//ゲームシーン

			//回答枠
			Novice::DrawBox(Answer.position.X, Answer.position.Y, Answer.radius, Answer.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer2.position.X, Answer2.position.Y, Answer2.radius, Answer2.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer3.position.X, Answer3.position.Y, Answer3.radius, Answer3.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer4.position.X, Answer4.position.Y, Answer4.radius, Answer4.radius, 0.0f, RED, kFillModeSolid);


			//回答欄

			//番号
			Novice::DrawSprite(box.position.X, box.position.Y, one, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box2.position.X, box2.position.Y, second, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box3.position.X, box3.position.Y, third, 1, 1, 0.0f, WHITE);
			
			Novice::DrawSprite(box4.position.X, box4.position.Y, four, 1, 1, 0.0f, WHITE);



			break;


		case scene2:


			Novice::ScreenPrintf(100, 100, "clear");

			Novice::ScreenPrintf(100, 120, "Return Space keys");


			break;


		case scene3:


			//ゲームシーン

			//回答枠
			Novice::DrawBox(Answer.position.X, Answer.position.Y, Answer.radius, Answer.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer2.position.X, Answer2.position.Y, Answer2.radius, Answer2.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer3.position.X, Answer3.position.Y, Answer3.radius, Answer3.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer4.position.X, Answer4.position.Y, Answer4.radius, Answer4.radius, 0.0f, RED, kFillModeSolid);


			//回答欄

			//番号
			Novice::DrawSprite(box.position.X, box.position.Y, one, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box2.position.X, box2.position.Y, second, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box3.position.X, box3.position.Y, third, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box4.position.X, box4.position.Y, four, 1, 1, 0.0f, WHITE);


			//二段目のブロック

			Novice::DrawSprite(box5.position.X, box5.position.Y, five, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box6.position.X, box6.position.Y, six, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box7.position.X, box7.position.Y, seven, 1, 1, 0.0f, WHITE);

			Novice::DrawSprite(box8.position.X, box8.position.Y, eight, 1, 1, 0.0f, WHITE);


			break;

		case scene4:


			//ゲームシーン

			//回答枠
			Novice::DrawBox(Answer.position.X, Answer.position.Y, Answer.radius, Answer.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer2.position.X, Answer2.position.Y, Answer2.radius, Answer2.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer3.position.X, Answer3.position.Y, Answer3.radius, Answer3.radius, 0.0f, RED, kFillModeSolid);

			Novice::DrawBox(Answer4.position.X, Answer4.position.Y, Answer4.radius, Answer4.radius, 0.0f, RED, kFillModeSolid);


			//回答欄

			//番号

			//アイスクライマー
			Novice::DrawSprite(box.position.X, box.position.Y, aiceClimber2, 1, 1, 0.0f, WHITE);
			//アトランチス
			Novice::DrawSprite(box2.position.X, box2.position.Y, atoran2, 1, 1, 0.0f, WHITE);
			//イーアルカンフー
			Novice::DrawSprite(box3.position.X, box3.position.Y, kanhu2, 1, 1, 0.0f, WHITE);
			//エキサイトバイク
			Novice::DrawSprite(box4.position.X, box4.position.Y, bike, 1, 1, 0.0f, WHITE);



			//二段目

			//ソロモンの鍵
			Novice::DrawSprite(box5.position.X, box5.position.Y, kagi, 1, 1, 0.0f, WHITE);
			//グラディウス
			Novice::DrawSprite(box6.position.X, box6.position.Y, gura2, 1, 1, 0.0f, WHITE);
			//レッキングクルー
			Novice::DrawSprite(box7.position.X, box7.position.Y, rekinngu, 1, 1, 0.0f, WHITE);
			//スターソルジャー
			Novice::DrawSprite(box8.position.X, box8.position.Y, star2, 1, 1, 0.0f, WHITE);


			//三段目

			//ツインビー
			Novice::DrawSprite(box9.position.X, box9.position.Y, twin2, 1, 1, 0.0f, WHITE);
			//ドンキーコング
			Novice::DrawSprite(box10.position.X, box10.position.Y, donki2, 1, 1, 0.0f, WHITE);
			//ドンキーコングjr
			Novice::DrawSprite(box11.position.X, box11.position.Y, DKjr2, 1, 1, 0.0f, WHITE);
			//USA
			Novice::DrawSprite(box12.position.X, box12.position.Y, USA2, 1, 1, 0.0f, WHITE);


			//最終確認
			if (finalFalse == true)
			{
				Novice::DrawSprite(AnswerBoxFalse.position.X, AnswerBoxFalse.position.Y, No, 1, 1, 0.0f, WHITE);
			}

			if (finalAnswer == true)
			{
				Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);
			}

			if (finalTrue == true)
			{
				Novice::DrawSprite(AnswerBoxTrue.position.X, AnswerBoxTrue.position.Y, Yes, 1, 1, 0.0f, WHITE);
			}



			break;

		case scene5:

			Novice::ScreenPrintf(100, 80, "owari");
			Novice::ScreenPrintf(100, 100, "end");
			Novice::ScreenPrintf(100, 120, "Return Space keys");

			break;


		case scene6:


			//Novice::ScreenPrintf(100, 100, "sceneCount = %d", SceneCount);


			break;

		case scene7:



			break;

		case scene8:




			break;

		}

		/*
		
		if (Scene == 1) {
			//CountTimeの中身描画
			Novice::ScreenPrintf(0, 0, "count%d", CountTime);
			//問題前のカウント
			if (CountTime <= 180 && CountTime >= 121) {
				Novice::ScreenPrintf(0, 15, "3");
			}
			if (CountTime <= 120 && CountTime >= 61) {
				Novice::ScreenPrintf(0, 15, "2");
			}
			if (CountTime <= 60 && CountTime >= 1) {
				Novice::ScreenPrintf(0, 15, "1");
			}
		}




		//問題中のカウント
		if (Scene == 2) {
			Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED, kFillModeSolid);

			//FlushTimeの中身描画
			Novice::ScreenPrintf(0, 0, "count%d", FlushTime);
			//3秒前のカウント
			if (FlushTime <= 180 && FlushTime >= 121) {
				Novice::ScreenPrintf(0, 15, "3");
			}
			if (FlushTime <= 120 && FlushTime >= 61) {
				Novice::ScreenPrintf(0, 15, "2");
			}
			if (FlushTime <= 60 && FlushTime >= 1) {
				Novice::ScreenPrintf(0, 15, "1");
			}

			Novice::ScreenPrintf(300, 300, "%d", Question);

		}

		//回答中
		if (Scene == 3) {
			Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLUE, kFillModeSolid);
		}
		
		
		
		*/


		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
