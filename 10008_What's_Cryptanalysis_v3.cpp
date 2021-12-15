#include <iostream>
#include <string>
#include <cctype> // for toupper
#include <string.h>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;

/*
Q10008: What's Cryptanalysis
密碼翻譯（cryptanalysis）是指把某個人寫的密文（cryptographic writing）加以分解。
這個程序通常會對密文訊息做統計分析。你的任務就是寫一個程式來對密文作簡單的分析。

Input
輸入的第1列有一個正整數n，代表以下有多少列需要作分析的密文。
接下來的n列，每列含有0或多個字元（可能包含空白字元）

Output
每列包含一個大寫字元（A~Z）和一個正整數。這個正整數代表該字元在輸入中出現的次數。
輸入中大小寫（例如：A及a）視為相同的字元。
輸出時請按照字元出現的次數由大到小排列，如果有2個以上的字元出現次數相同的話，則按照字元的大小（例如：A在H之前）由小到大排列。
請注意：如果某一字元未出現在輸入中，那他也不應出現在輸出中。
*/

// #define len 5000

//TODO：未完成1215
int main()
{
    // cout<<(int)'A'<<endl; // 65
    // cout<<(int)'Z'<<endl; // 90

    int cnt[26] = {0};
    int n; cin >> n;
    // char* sentence;
    string s; 
    char str[5000];
        // cin >> s; // 無法處理空格space、tab、
        // 且cin 輸入後會有enter(換行) 存在stream，所以要加上cin.ignore(int num, '\n');
        // https://stackoverflow.com/questions/26466329/error-in-getline-input-in-c
    // [注意] 必須要處理換行 cin.ignore(); // 換行
     cin.ignore();
     for (int i = 0; i < n; i++){
        // fgets(str, len, stdin); // for C
        cin.getline(str, 5000); // for C++
        int str_len = strlen(str);
        // cout <<"ok "<< str <<" "<<str_len<< endl;

        // 計算字元
        for (int j = 0; j < str_len; j++)
        {
            // cout<<str[j]<<" \n";
            // cout << toupper(str[i]) - 65 << endl; // toupper: ('A'= 65 ascii code)
            if ((toupper(str[j]) - 65) >= 0 && (toupper(str[j]) - 65) < 26){
                // cout<<str[j]<<" ";
                cnt[toupper(str[j]) - 65]++;
            }
        }

     }
        // sort(cnt, cnt+26); // error
        // 請按照字元出現的次數由大到小排列，如果有2個以上的字元出現次數相同的話，則按照字元的大小
        
        int len = 27;
        while(--len){
            // cout<<"len = "<<len<<endl;
            for (char c ='A'; c<='Z'; c++)
            {
                if(len==cnt[c-65])
                    cout << c <<" "<< cnt[c-65] << endl; 
            }
        }
  
    return 0;
}
