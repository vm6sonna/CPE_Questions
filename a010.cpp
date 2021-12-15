#include<iostream>

using namespace std;

int main(){
/*
饅頭之家住了大綠、小綠、阿藍、阿紫等四個人，
其中大綠是小綠的姐姐，而且比她大三歲，
阿藍則是比小綠年齡的兩倍少五歲，
而阿紫年齡的十位數和阿藍相同、個位數和大綠相同。
已知小綠的年齡，你能推算出阿紫是幾歲嗎？
輸入說明：
輸入一個正整數，代表小綠的年齡。
輸出說明：
請輸出阿紫是幾歲。
*/
    int small_green_age, big_green_age, blue_age, purple_age;
    cin>>small_green_age;
    big_green_age = small_green_age+3;
    blue_age = 2*small_green_age-5; 
    purple_age = (blue_age/10)*10+big_green_age%10;

    cout<<purple_age<<'\n';
    return 0;
}