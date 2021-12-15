#include <iostream>
#include <vector>

using namespace std;
/*
給你一個正整數 N，請你印出以 1~N 的數字構成的直角三角形的圖案。
輸入說明：
輸入一個正整數 N (1<=N<=9)，代表要印出的三角形的高。
輸出說明：
請依照輸出範例的格式，輸出指定高度的數字三角形。
*/

int main()
{

    int N;
    cin >> N;
    // cout<<(N!=0)<<endl;
    if (N >= 1 && N <= 9)
    {

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << i;
            cout << '\n';
        }
    }

    return 0;
}
