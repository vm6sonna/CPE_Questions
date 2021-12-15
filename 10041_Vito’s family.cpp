#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<algorithm>

using namespace std;

void printAry(int ary[]){
    int len = sizeof(ary)/sizeof(int);
    for(int i=0; i<len; i++){
        cout<<ary[i]<<" ";
    }
} 
int main(void) {
    int n, r, s[30003];
    int dis;
    int mid;
    
    cin>>n;
    while(n--){
        dis = 0;
        cin>>r;
        for(int i=0; i<r; i++){
            cin>>s[i];
        }
        sort(s, s+r);
        mid = s[r/2];
        for(int i=0; i<r; i++){
            dis = dis+abs(s[i]-mid);
        }
        cout<<dis<<endl;
    }

   //system("pause");
   return 0;
   }

