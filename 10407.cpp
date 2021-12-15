#include<iostream>

using namespace std;


int main(){

// 因題目要求<2^32
// int type = -2,147,483,648 ~ 2,147,483,647
    long long int a,b; 
    while (cin>>a>>b)
    {
        if(a>=b)
            cout<<a-b<<endl;
        else if(b>a) cout<<b-a<<endl;                
    }
    


    return 0;
}