#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<iomanip> // setw

using namespace std;

// 20211210 01�G00 �����ݧ�! 
// 2021/12/10 ���W���� 
void trans(long long int n){
    if(n>=10000000){
        //kuti=n/10000000;
        //cout<<n/10000000<<" kuti "; 
        trans(n/10000000);
        cout<<" kuti"; 
        //cout<<" check: "<<n<<" ";
        n=n%10000000;
       // cout<<n<<endl;
        trans(n); 
    }
    else if(n>=100000){
        //lakh=n/100000;
        cout<<" "<<n/100000<<" lakh"; 
        n=n%100000;
        trans(n);                 
    }
    else if(n>=1000){
        //hajar=n/1000;
        cout<<" "<<n/1000<<" hajar"; 
        n=n%1000;
        trans(n);                 
    }
    else if(n>=100){
        //shata=n/100;
        cout<<" "<<n/100<<" shata";
        n=n%100; 
        trans(n);                
    }
    else{
        if(n) cout<<" "<<n;
    }    
}
int main(void) {
    long long int n;
    //int kuti, lakh, hajar, shata;
    int num=0;
    // n<= 999999999999999 = 15��9 = �p��16���
    // 2^10 = ������1000 = 10^3 4��� -> 2^30 = 10^9 10��� 
    // 16��� -> 10+6��� -> 10^9*10^6 
    while(cin>>n){
        
    //        kuti=0;
    //        lakh=0;
    //        hajar=0;
    //        shata=0;
        
        num++;
        // �Ũ���X 
        cout<<right<<setw(4)<<num<<".";
        if(n==0){
            cout<<" "<<0<<endl;
            continue;
        }
        while(n){
            trans(n);
            cout<<endl;
            break;
                                     
        }
 
        
    }
    

   //system("pause");
   return 0;
   }

