// DelArr.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//ダブルポインター

#include <iostream>
using namespace std;

//void DelArr(int** ppArr)
//{
//	if (*ppArr != NULL)
//	{
//		delete[] * ppArr;
//		*ppArr = NULL;
//	}
//}

int main()
{
	/*int* pArr = NULL;

	pArr = new int[256];
	DelArr(&pArr);*/
	int seconds=0;
	int minutes;
	cout << "秒数を入力してください。" << endl;
	cin >> minutes;
	for (;;)
	{
		if (minutes <= 60)
		{
			break;
		}
		else
		{
			minutes -= 60;
			seconds++;
		}
	}
	if (minutes <= 9)
	{
		cout << seconds << "/" << 0 <<minutes << "秒";
	}
	else
	{
		cout << seconds << "/" << minutes<<"秒";
	}

	
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
