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
	scene7
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

	//現在のマウスの座標
	int mauseX = 0;
	int mauseY = 0;

	int mauseX2 = 0;
	int mauseY2 = 0;

	int mauseX3 = 0;
	int mauseY3 = 0;

	int mauseX4 = 0;
	int mauseY4 = 0;

	
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


	//回答欄
	object box =
	{
		{200,600},
		{0,0},
		60
	};

	object box2 =
	{
		{500,600},
		{0,0},
		60
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
		60
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



	//カウント

	int count = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	int count7 = 0;
	int count8 = 0;
	int count9 = 0;
	int count10 = 0;
	int count11 = 0;
	int count12 = 0;

	int AnswerCount = 0;
	int AnswerCount2 = 0;
	int AnswerCount3 = 0;
	int AnswerCount4 = 0;



	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

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
				SCENE = scene1;

				//変数初期化
				box.position.X = 200;
				box.position.Y = 600;

				box2.position.X = 500;
				box2.position.Y = 600;

				box3.position.X = 800;
				box3.position.Y = 600;

				box4.position.X = 1100;
				box4.position.Y = 600;

				count = 0;
				count2 = 0;
				count3 = 0;
				count4 = 0;
				count5 = 0;
				count6 = 0;
				count7 = 0;
				count8 = 0;
				count9 = 0;
				count10 = 0;
				count11 = 0;
				count12 = 0;

				AnswerCount = 0;
				AnswerCount2 = 0;
				AnswerCount3 = 0;
				AnswerCount4 = 0;

			}


			//ノーマルモード
			if (keys[DIK_N] && preKeys[DIK_N] == 0)
			{
				SCENE = scene3;
			}

			//ハードモード
			if (keys[DIK_H] && preKeys[DIK_H] == 0)
			{
				SCENE = scene4;
			}
			

			break;

		case scene1:

			//イージーモード

			idouFlag = false;
			idouFlag2 = false;
			idouFlag3 = false;
			idouFlag4 = false;

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
				if (AnswerFalg == true)
				{
					AnswerCount++;
				}
			}

			//左から2番目の正解
			if (Answer2.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(10, 220, "iine");
				AnswerFalg2 = true;
				if (AnswerFalg2 == true)
				{
					AnswerCount2++;
				}
			}

			//左から3番目の正解
			if (Answer3.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(10, 240, "iine");
				AnswerFalg3 = true;
				if (AnswerFalg3 == true)
				{
					AnswerCount3++;
				}
			}

			//一番右の正解
			if (Answer4.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(10, 260, "iine");
				AnswerFalg4 = true;
				if (AnswerFalg4 == true)
				{
					AnswerCount4++;
				}
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
				if (AnswerEnd == true)
				{
					count++;
				}
			}

			if (Answer.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 220, "owari");
				AnswerEnd2 = true;
				if (AnswerEnd2 == true)
				{
					count2++;
				}
			}

			if (Answer.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer.position.X + Answer.radius &&
				Answer.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer.position.Y + Answer.radius)
			{
				Novice::ScreenPrintf(30, 240, "owari");
				AnswerEnd3 = true;
				if (AnswerEnd3 == true)
				{
					count3++;
				}
			}


			//左から2番目の回答欄バージョン
			if (Answer2.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 200, "owari");
				AnswerEnd4 = true;
				if (AnswerEnd4 == true)
				{
					count4++;
				}
			}

			if (Answer2.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 220, "owari");
				AnswerEnd5 = true;
				if (AnswerEnd5 == true)
				{
					count5++;
				}
			}

			if (Answer2.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer2.position.X + Answer2.radius &&
				Answer2.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer2.position.Y + Answer2.radius)
			{
				Novice::ScreenPrintf(70, 240, "owari");
				AnswerEnd6 = true;
				if (AnswerEnd6 == true)
				{
					count6++;
				}
			}


			//左から3番目の回答欄バージョン
			if (Answer3.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 200, "owari");
				AnswerEnd7 = true;
				if (AnswerEnd7 == true)
				{
					count7++;
				}
			}

			if (Answer3.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 220, "owari");
				AnswerEnd8 = true;
				if (AnswerEnd8 == true)
				{
					count8++;
				}
			}

			if (Answer3.position.X <= box4.position.X + box4.radius &&
				box4.position.X <= Answer3.position.X + Answer3.radius &&
				Answer3.position.Y <= box4.position.Y + box4.radius &&
				box4.position.Y <= Answer3.position.Y + Answer3.radius)
			{
				Novice::ScreenPrintf(110, 240, "owari");
				AnswerEnd9 = true;
				if (AnswerEnd9 == true)
				{
					count9++;
				}
			}


			//一番右の回答欄バージョン
			if (Answer4.position.X <= box.position.X + box.radius &&
				box.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box.position.Y + box.radius &&
				box.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 200, "owari");
				AnswerEnd10 = true;
				if (AnswerEnd10 == true)
				{
					count10++;
				}
			}

			if (Answer4.position.X <= box2.position.X + box2.radius &&
				box2.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box2.position.Y + box2.radius &&
				box2.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 220, "owari");
				AnswerEnd11 = true;
				if (AnswerEnd11 == true)
				{
					count11++;
				}
			}

			if (Answer4.position.X <= box3.position.X + box3.radius &&
				box3.position.X <= Answer4.position.X + Answer4.radius &&
				Answer4.position.Y <= box3.position.Y + box3.radius &&
				box3.position.Y <= Answer4.position.Y + Answer4.radius)
			{
				Novice::ScreenPrintf(150, 240, "owari");
				AnswerEnd12 = true;
				if (AnswerEnd12 == true)
				{
					count12++;
				}
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
					SCENE = scene5;
				}
			}


			//正解だったらシーン遷移
			if (AnswerFalg && AnswerFalg2 && AnswerFalg3 && AnswerFalg4 == true)
			{
				if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
				{
					SCENE = scene2;
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
			
			//最初に戻る
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SCENE = scene0;
			}
			

			break;

		case scene4: 

			//ハードモード

			//最初に戻る
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SCENE = scene0;
			}

			break;

		case scene5:

			//不正解画面

			//最初に戻る
			if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0)
			{
				SCENE = scene0;
			}

			break;

		}

		
		
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
			Novice::DrawBox(box.position.X, box.position.Y, box.radius, box.radius, 0.0f, WHITE, kFillModeSolid);

			Novice::DrawBox(box2.position.X, box2.position.Y, box2.radius, box2.radius, 0.0f, GREEN, kFillModeSolid);

			Novice::DrawBox(box3.position.X, box3.position.Y, box3.radius, box3.radius, 0.0f, BLUE, kFillModeSolid);

			Novice::DrawBox(box4.position.X, box4.position.Y, box4.radius, box4.radius, 0.0f, BLACK, kFillModeSolid);


			Novice::ScreenPrintf(10, 10, "mauseX = %d", mauseX);
			Novice::ScreenPrintf(10, 30, "mauseY = %d", mauseY);

			Novice::ScreenPrintf(10, 50, "mauseX2 = %d", mauseX2);
			Novice::ScreenPrintf(10, 70, "mauseY2 = %d", mauseY2);

			Novice::ScreenPrintf(10, 700, "count = %d", count);
			Novice::ScreenPrintf(100, 700, "count2 = %d", count2);
			Novice::ScreenPrintf(190, 700, "count3 = %d", count3);
			Novice::ScreenPrintf(280, 700, "count4 = %d", count4);
			Novice::ScreenPrintf(370, 700, "count5 = %d", count5);
			Novice::ScreenPrintf(460, 700, "count6 = %d", count6);
			Novice::ScreenPrintf(550, 700, "count7 = %d", count7);
			Novice::ScreenPrintf(640, 700, "count8 = %d", count8);
			Novice::ScreenPrintf(730, 700, "count9 = %d", count9);
			Novice::ScreenPrintf(820, 700, "count10 = %d", count10);
			Novice::ScreenPrintf(920, 700, "count11 = %d", count11);
			Novice::ScreenPrintf(1020,700, "count12 = %d", count12);

			Novice::ScreenPrintf(10, 670, "AnswerCount = %d", AnswerCount);
			Novice::ScreenPrintf(10, 650, "AnswerCount2 = %d", AnswerCount2);
			Novice::ScreenPrintf(10, 630, "AnswerCount3 = %d", AnswerCount3);
			Novice::ScreenPrintf(10, 610, "AnswerCount4 = %d", AnswerCount4);


			break;


		case scene2:
			

			Novice::ScreenPrintf(100, 100, "clear");

			Novice::ScreenPrintf(100, 120, "Return Space keys");


			break;


		case scene3:


			Novice::ScreenPrintf(100, 100, "nomarlMode");

			Novice::ScreenPrintf(100, 120, "Return Space keys");


			break;

		case scene4:


			Novice::ScreenPrintf(100, 100, "hardMode");

			Novice::ScreenPrintf(100, 120, "Return Space keys");


			break;

		case scene5:


			Novice::ScreenPrintf(100, 100, "end");
			Novice::ScreenPrintf(100, 120, "Return Space keys");

			break;

		}

		

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
