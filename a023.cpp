#include<iostream>

using namespace std;

int f(int N){
    if (N%2!=0)
        return 3*N+1;
    else return N/2;
}

int main(){
/*
有一個數列是這樣的：

第一項是一個大於一的正整數 N
如果這一項是奇數，則它的下一項是 3N+1
如果這一項是偶數，則它的下一項是 N/2
如此反覆，直到最後一項出現 1 為止
 現在給你第一項的 N，請你求出這個數列有幾項，例如第一項是3，則這個數列為：3、10、5、16、8、4、2、1，共8項。

輸入說明：
輸入一個大於1的正整數 N。
輸出說明：
請輸出以 N 為第一項的數列有幾項。
*/
    int N, cnt=1;
    cin>>N;
    while(f(N)!=1){
        N = f(N);
        cnt++;
    }
    // 加上最後一項出現 1
    cnt++;
    cout<<cnt<<'\n';

    return 0;
}

