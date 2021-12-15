#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
進德女子監獄座落於自由女中旁，是間作風開放的監獄，每到中午時間便會放風讓收容人到外面用餐。
當然還是會有人逾時不歸，身為管理者的美惠，每天總是要為哪些人沒有回來而傷透腦筋。
現在想請你寫一個程式，幫助美惠找出哪些人沒有回來。

輸入說明：
一開始有兩個正整數 N、M (0<=M<N<=20)，
N 代表收容人的人數(編號從 1 到 N)，M 代表回來的人數，
接下來有 M 個正整數，分別代表這 M 位已經回來的收容人編號(不用考慮編號超出範圍或其他錯誤)。

輸出說明：
請將沒有回來的收容人編號從小到大輸出，兩個編號中間請空一格。
*/

int main()
{
    int N, M, cnt = 0;

    // N 代表收容人的人數(編號從 1 到 N)
    // M 代表回來的人數
    cin >> N >> M;
    vector<int> vecM(M, 0);

    // 輸入陣列M
    for (int i = 0; i < M; i++)
        cin >> vecM[i];

    // cout << "排序前" << '\n';
    // for (int i = 0; i < M; i++)
    //     cout << vecM[i] << " ";

    // 印出vec.begin()
    // vector<int>::iterator b = vecM.begin();
    // cout << "vecM.begin() = " << *b << '\n';

    // sort
    // sort(vecM.begin(), vecM.begin() + M);

    // cout << "\n排序後" << '\n';
    // for (int i = 0; i < M; i++)
    //     cout << vecM[i] << " ";
    // cout << '\n';

    // 正解
    for (int j = 1; j <= N; j++)
    {
        // 找沒回來的收容人編號
        cnt = 0;
        for (int i = 0; i < M; i++) // M:3
        {
            if (j != vecM[i])
            {
                cnt++;
            }
            if (cnt == M) // 比對不相同超過M個正整數次數
                cout << j << ' ';
        }
    }
    return 0;
}
