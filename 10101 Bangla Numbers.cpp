#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


//long long int trans(long long int n){
//    
//    
//    return n;
//}
int main(void) {
    long long int n;
    int kuti, lakh, hajar, shata;
    int num=0;
    // n<= 999999999999999 = 15��9 = �p��16���
    // 2^10 = ������1000 = 10^3 4��� -> 2^30 = 10^9 10��� 
    // 16��� -> 10+6��� -> 10^9*10^6 
    while(cin>>n){
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        
        kuti=0;
        lakh=0;
        hajar=0;
        shata=0;
        num++; 
        cout<<num<<"."<<"  ";
        while(n){
            if(n>=10000000){
                kuti=n/10000000;
                cout<<kuti<<" kuti "; 
                n=n%10000000;
            }
            else if(n>=100000){
                lakh=n/100000;
                cout<<lakh<<" lakh "; 
                n=n%100000;                
            }
            else if(n>=1000){
                hajar=n/1000;
                cout<<hajar<<" hajar "; 
                n=n%1000;                
            }
            else if(n>=100){
                shata=n/100;
                cout<<shata<<" shata ";
                n=n%100;                
            }
            else{
                cout<<n<<endl;
                break;
            }
                                     
        }
 
        
    }
    

   //system("pause");
   return 0;
   }

