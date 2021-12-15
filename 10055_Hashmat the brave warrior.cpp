#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main(void) {
    // int 放不下 2^32；
    // int：-2^31 ~ 2^31 
    long long int h, o;
    while(cin>>h>>o){
        cout<<abs(o-h)<<endl;// 錯誤! 輸出為int type 
        //cout<<llabs(o-h)<<endl;// 輸出為int type 
    }

   //system("pause");
   return 0;
   }

