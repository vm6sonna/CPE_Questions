#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int cycle(int n){
    int cnt = 1;
    //cout<<"n = "<< n << " ";
    //while(1){
    while(n != 1){
    //    if(n==1) break;
        if(n%2==1) {n = n*3+1; cnt++;} 
        else if(n%2==0) {n=(n>>1); cnt++;} //{n=n/2; cnt++;}
    }
    //cout<<"\ncnt = "<< cnt << endl;
    return cnt;                
}

int get_cycle_len(int i, int j){
    // find cycle length in range (i,j)
    int maxlen = 0;
    int len;
    int temp;
    if(i>j){
        temp = i;
        i = j;
        j = temp;
    }
    
    if(i<=j){
        for(int n = i+1; n<=j; n++){
            len = cycle(n);
            if(maxlen<len)
                maxlen = len;
                //cout<< maxlen << " ";
        }
    }
    return maxlen; 
} 

int main(void) {
    int i, j;
    while(cin>>i>>j){ 
        int ans = get_cycle_len(i, j);
        // cout<<"\nresult ¡G";
        cout<< i << " "<< j <<' '<< ans << "\n";
    } 
   //system("pause");
   return 0;
   }

