#include <iostream>
#include <vector>

using namespace std;
/*
給你一連串的正整數，請你找出最大的數出現在第幾個位置，以及它是多少。
輸入說明：
一開始有一個正整數 N (1<=N<=10)，代表後面會出現幾個數字，接下來即是這 N 個整數。
輸出說明：
請輸出最大值出現在第幾個位置(位置從 1 開始算)，以及它是多少，中間請空一格。
*/

int main()
{
    int N, max = 0, pos = 0;
    cin >> N;
    vector<int> vec(N, 0);
    // 輸入陣列
    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
        // cout << vec[i];
    }
    // 找最大值max
    for (int i = 0; i < N; i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
            pos = i + 1;
        }
    }
    cout << pos << ' ' << max << '\n';
    // 列出vec
    // for (int i = 0; i < N; i++)
    // {
    //     cout << vec[i] << '\n';
    // }

    return 0;
}
