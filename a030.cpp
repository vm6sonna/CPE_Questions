#include<iostream>

using namespace std;
/*
給你兩個正整數 A、B (A 和 B 不一定誰比較大)，請你把 A 到 B 之間所有的整數加起來，並印出它的算式以及結果。
輸入說明：
輸入兩個正整數 A、B (A 和 B 不一定誰比較大)。
輸出說明：
依照下面輸出範例的格式，輸出 A 到 B 之間所有整數相加的算式以及結果。
*/
int main(){

    int A, B, sum=0;
    cin>>A>>B;
    if(A>=B){
        for(int i=A;i>B;i--){
            cout<<i;
            cout<<"+";
            sum+=i;
        }
        cout<<B<<"="<<sum+B<<'\n';
    }
    // A<B
    else{
        for(int i=A;i<B;i++){
            cout<<i;
            cout<<"+";
            sum+=i;
        }
        cout<<B<<"="<<sum+B<<'\n';
    }

    return 0;
}

