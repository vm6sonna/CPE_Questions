#include<iostream>

using namespace std;

int main(){
/*
如果一個整數是2的倍數，則它就是一個偶數，否則為奇數。給你一個整數，請你判斷它是奇數還是偶數。
輸入說明：
輸入一個整數 N，即為要判斷的數。
輸出說明：
若輸入的整數為奇數，則輸出 ODD，若為偶數則輸出 EVEN。
*/

    int N;
    cin>>N;
    if(N%2==0) cout<<"EVEN"<<'\n';
    else cout<<"ODD" <<'\n';
    return 0;
}