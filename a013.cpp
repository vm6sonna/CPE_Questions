#include<iostream>

using namespace std;

int main(){
/*
某次月考完，全班有80%的同學的成績是落在75~90之間，
當然還是有少部分優秀的同學的得分比90分還高，也有少部分同學考不到75分。
現在給你一個成績，請問你這分數是不是在這80%的同學裡面。
輸入說明：
輸入一個整數 N (0<=N<=100) 代表要判斷的成績。
輸出說明：
若這個分數是落在 75~90 之間(包括75和90)，則輸出 YES，否則輸出 NO。
*/

    int N;
    cin>>N;
    if(N>=75 && N<=90) cout<<"YES"<<'\n';
    else cout<<"NO" <<'\n';
    return 0;
}