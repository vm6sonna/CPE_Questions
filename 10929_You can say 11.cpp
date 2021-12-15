#include <iostream>
#include <cstring>
#include <stdlib.h>     /* abs */
using namespace std;

/*
http://web.kshs.kh.edu.tw/academy/luckycat/homework/q10929.htm
你的任務是，給你一個正整數 N，判定它是否是 11 的倍數。

Input：
每列資料有一個正整數N，N 最大可能到 1000 位數。
若 N = 0 代表輸入結束。

Output：
對每個輸入的數，輸出是否為 11 的倍數。輸出格式請參考 Sample Output。
*/

bool check_int(int n, bool ans){

    if(n%11==0) ans = true;
    else ans= false;
    return ans;
}

bool check(char n[], bool ans){
    int odd=0, even=0;
    string s(n); // char array to string
    for(int i=0; s[i]; i++) {
        //cout<<s[i]<<" "<< (int) s[i]<<endl;
        if (i%2==1) // 對應偶數位
            even = even + (s[i]-'0');
        else // 對應奇數位
            odd = odd + (s[i]-'0');
            
        // cout<<"odd = "<<odd<< " "<<"even = "<<even<<endl;
    }
    if(abs(odd-even)%11==0)
        ans=true;
    else ans=false;

    return ans;
}

int main()
{
    // int n; 因N 最大可能到 1000 位數，連用long long int 都無法
    // 只好用char array
    char n[1001]= {0};
    bool ans;
    while(cin>>n){
        ans = false;
        int len = strlen(n);
        // cout<<len<<endl;
        if(len==1 && n[0] =='0') break;
        // check whether n is multiple or not.
        else
            ans = check(n, ans);
            if(ans) cout<<n<<" is a multiple of 11.\n";
            else cout<<n<<" is not a multiple of 11.\n";

    }
    return 0;
}
