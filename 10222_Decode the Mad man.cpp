#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main(void) {
    char c;
    char keyboard[] = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    int len = sizeof(keyboard)/sizeof(char); 
    while(cin.get(c)) // cin>>c ����B�z�ťզr��! 
    {
        c = tolower(c); // to small charater
        if(c>='a'||c<='z')
            for(int i=0; i<len; i++){
                if(c == keyboard[i]){
                    c = keyboard[i-2];
                }
            } 
        cout<<c;
    }

   //system("pause");
   return 0;
   }

