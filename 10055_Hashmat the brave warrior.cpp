#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main(void) {
    // int �񤣤U 2^32�F
    // int�G-2^31 ~ 2^31 
    long long int h, o;
    while(cin>>h>>o){
        cout<<abs(o-h)<<endl;// ���~! ��X��int type 
        //cout<<llabs(o-h)<<endl;// ��X��int type 
    }

   //system("pause");
   return 0;
   }

