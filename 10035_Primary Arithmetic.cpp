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
        // �`�N�G�u�nn1,n2���賣����0�N�n�@�����U�h
        while(n1||n2){  
            //1. ���i�� �F ���B�z�Ӧ�� 
            if( num+(n1%10+n2%10) >=10) {num=1 ; carry++;} 
            else{ // �S�i�� 
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

