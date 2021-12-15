#include<iostream>

using namespace std;

int main(){
/*
我們知道一小時是60分鐘，假設現在有 h 小時和 m 分鐘，請問你它總共是幾分鐘？
輸入說明：
輸入兩個整數 H、M 代表有 H 小時和 M 分鐘。
輸出說明：
請輸出總共是幾分鐘。*/
    int H, M;

    cin>>H>>M;
    cout<<H*60+M<<'\n';


    return 0;
}