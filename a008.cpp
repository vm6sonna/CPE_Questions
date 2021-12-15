#include<iostream>

using namespace std;

int main(){
/*
攝氏溫標是目前世界上最常用的溫標，而在美國則是使用華氏溫標為主，
假設現在是攝氏 C 度，則華氏 F 度可以表示成 F=C*9/5+32。
現在給你攝氏的溫度，請問你它是華氏幾度？
輸入說明：
輸入一個數字 C，代表攝氏的溫度。
輸出說明：
請輸出華氏溫度是幾度。
*/
    double C, F;

    cin>>C;
    F = C*9/5+32;
    cout<<F<<'\n';


    return 0;
}