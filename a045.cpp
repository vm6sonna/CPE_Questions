#include <iostream>
#include <cmath>

using namespace std;
/*
對於一個正整數 N 來說，如果它的因數只有 1 和 N 本身，沒有其他的因數，則我們稱它為「質數」。
現在給你一個正整數，請你判斷它是不是質數。
輸入說明：
輸入一個正整數 N。
輸出說明：
若 N 為質數，則輸出 YES，否則輸出 NO。
*/

int main()
{

    int N;
    cin >> N;
    // 預設為質數
    bool flag = true;
    // 判斷是否為質數
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            flag = false;
            cout << "NO";
            break;
        }
    }
    if (flag == true)
        cout << "YES";

    return 0;
}
