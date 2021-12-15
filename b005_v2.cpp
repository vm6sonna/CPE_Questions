#include <iostream>
#include <map>

using namespace std;
/*
綠苑電台為了方便讓聽眾點播歌曲，便將電台內所有取得授權的歌曲編號(1~100000000的正整數)，
聽眾在明信片上註明歌曲編號，即可完成點播。
為了知道本年度最熱門的點播是哪一首，小亮亮把所有明信片翻了出來一張一張看，
發現看到一半，就忘記每一首歌的點播次數了。現在想請你寫一個程式，幫小亮亮找出最熱門的歌曲是哪一曲。

 

輸入說明：
一開始有一個正整數 N (1<=N<=20)，代表有幾張明信片的點播，接下來有 N 個 1~100000000 的正整數，代表這 N 張明信片所點播的歌曲編號。
輸出說明：
請輸出點播次數最高的歌曲編號，以及它的點播次數(不用考慮最高點播次數的歌曲有兩首以上的情況)，中間請空一格。
*/

int main()
{
    int N, ans = 0, cnt = 1, max_cnt = 1;

    // N 代表有幾張明信片的點播
    cin >> N;
    vector<int> vecN(N, 0);

    // 輸入陣列M
    for (int i = 0; i < N; i++)
        cin >> vecN[i];
    // 找出重複最多次數的item
    for (int i = 0; i < N; i++) // N:3 i=0, 1, 2
    {
        cnt = count(vecN.begin(), vecN.end(), vecN[i]);
        if (max_cnt < cnt)
        {
            max_cnt = cnt;
            ans = vecN[i];
        }
    }
    cout << ans << ' ' << max_cnt << '\n';
    return 0;
}
