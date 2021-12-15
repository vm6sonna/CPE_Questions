#include <iostream>
#include <vector>

using namespace std;
/*
對一個正整數 N 而言，將它除了本身以外所有的因數加起來的總和為 S，
如果 S>N，則 N 為盈數，如果 S<N，則 N 為虧數，
而如果 S=N，則 N 為完全數(Perfect Number)。
例如 10 的因數有 1、2、5、10，1+2+5=8<10，因此10 為虧數，
而 12 的因數有 1、2、3、4、6、12，1+2+3+4+6=16>12，因此 12 為盈數。
至於 6 的因數有 1、2、3、6，1+2+3=6，所以 6 是完全數(它也是第一個完全數)。
現在請你一個正整數，請你判斷它是哪一種。
輸入說明：
請入一個正整數 N。
輸出說明：
若輸入的數為盈數，則輸出 Abundant，若輸入的數為虧數，則輸出 Deficient，若輸入的數為完全數，則輸出 Perfect。
*/

int main()
{

    int N, S = 0;
    cin >> N;
    // cout<<(N!=0)<<endl;
    if (N > 1)
    {
        S++;
        // 假設 n 有一個因數為 k，則必有另一個因數為 n/k，
        // 你只要從 2 找到 根號 n 即可，
        // 不用做到 n/2 。
        for (int i = 2; i * i < N; i++)
        {
            if (N % i == 0)
            {
                // cout<< i <<endl;
                S += i;
                S += N / i;
            }
        }
    }

    // cout << S << endl;
    //1.若輸入的數 S>N為盈數，則輸出 Abundant
    if (S > N)
    {
        cout << "Abundant" << '\n';
    }
    //2.若輸入的數S<N為虧數，則輸出 Deficient
    else if (S < N || N == 0)
    {
        cout << "Deficient" << '\n';
    }
    //3.若輸入的數為完全數，則輸出 Perfect
    else
    { //(S==N)
        cout << "Perfect" << '\n';
    }

    return 0;
}
