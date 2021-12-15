#include<iostream>

using namespace std;

int main(){
/*
我們知道一小時是60分鐘，假設現在有 m 分鐘，請問你它總共是幾小時、幾分鐘？
輸入說明：
輸入一個整數 M 代表有 M 分鐘。
輸出說明：
請輸出總共是幾小時、幾分鐘，中間請空一格(請參考下面的輸出範例)。
*/
    int H, M;

    cin>>M;
    cout<<M/60<<' '<<M%60<<'\n';


    return 0;
}