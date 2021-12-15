#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    int carry, num;
    while(cin>>n1>>n2){
        if(n1==0 && n2==0) break;
        carry=0;
        num=0;
        
        // handle the carry
        // 注意：只要n1,n2雙方都不為0就要一直做下去
        while(n1||n2){  
            //1. 有進位 ； 先處理個位數 
            if( num+(n1%10+n2%10) >=10) {num=1 ; carry++;} 
            else{ // 沒進位 
                num=0;
            }
            n1 = n1/10; 
            n2 = n2/10; 
        }
        if(carry==0) cout<<"No carry operation."<<endl;
        else if(carry==1) cout<<"1 carry operation."<<endl;    
        else cout<<carry<<" carry operations."<<endl;    
    
    } 
    

   //system("pause");
   return 0;
   }

