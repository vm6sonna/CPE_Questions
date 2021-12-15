#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int a,b;
    int sum, i=0;
    if(n>100) return 0;
    while (n--)
    {
        // cout<<"n = "<<n<<endl; // (n-1)-> ...-> 1 -> 0
            sum = 0;
            cin>>a>>b;
            int tmp;
            if(a>b){
                tmp=a;
                a=b;
                b=tmp;
            }
            // 判斷 
            // 1. a為奇數，b也為奇數
            if(a%2==1 && b%2==1) 
                for(int i=a; i<=b; i+=2)
                    sum+=i;
            // 2. a為奇數，b不為奇數
            if(a%2==1 && b%2==0) 
                for(int i=a; i<b; i+=2)
                    sum+=i;
            // 3. a不為奇數，b為奇數
            if(a%2==0 && b%2==1) 
                for(int i=a+1; i<=b; i+=2)
                    sum+=i;
            // 4. a不為奇數，b也不為奇數
            if(a%2==0 && b%2==0) 
                for(int i=a+1; i<b; i+=2)
                    sum+=i;
            cout<<"Case "<<i+1<<": "<<sum<<endl;
            i++;

    }
    
    return 0;
}
