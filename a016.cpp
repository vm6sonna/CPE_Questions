#include<iostream>

using namespace std;

int main(){
/*
由於地球公轉一周大約是365.242199日，所以如果以一年365日來記算，
每四年就會多出0.968796天，於是有人提出每四年要多出一天，這就是閏年。
但是因為每四年多出來的並非完整的一天，所以累積到100年的時候，就不須要再多這一天了。
而同樣的道理，到了400年，又會多出一天來。目前閏年的規則如下(西元紀年)：

如果這一年不是4的倍數，則它是平年。
如果這一年是4的倍數，但不是100的倍數，則它是閏年。
如果這一年是100的倍數，但不是400的倍數，則它是平年。
如果這一年是400的倍數，則它是閏年。
 現在給你一個年份，請你判斷它是不是閏年。

輸入說明：
輸入一個正整數 N，代表這是西元 N 年。
輸出說明：
若這一年是閏年，則輸出 YES，否則輸出 NO。
*/
    // 代表這是西元 N 年。
    int N;
    cin>>N;
    if(N%4!=0) cout<<"NO"<<'\n';
    else if(N%4==0 && N%100!=0) cout<<"YES"<<'\n';
    else if(N%100==0 && N%400!=0) cout<<"NO"<<'\n';
    else if(N%400==0) cout<<"YES" <<'\n';
    return 0;
}