#include<iostream>

using namespace std;

int main(){

    char ch, str[64];
    // 輸入：a I am anson.
    cin>>ch>>str; 
    // 但卻沒出現整個句子
    cout<<ch<<" "<<str<<endl; //輸出： a I

    //清空資料流  
    // fflush(stdin); // for C 語法
    cin.clear(); cin.sync();  // for C++ 語法
    // 讀取整行
    char line[64];
    cin.getline(line, 64);
    cout<< line<< endl; // a I am anson
    
    return 0;
}