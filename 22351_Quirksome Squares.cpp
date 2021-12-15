#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<math.h>
#include<typeinfo> // typeid
#include<vector>
#include<iomanip> // setprecision   


using namespace std;

int main(void) {
    int N;
    
    while(cin>>N){
        vector<int> ary_1d;
        double n = sqrt(pow(10, N));
        //cout<<n<<endl;
        for(int j=0; j<n; j++){
                if(j*j == ((j*j/(int)n+j*j%(int)n)*(j*j/(int)n+j*j%(int)n))) 
                    ary_1d.push_back(j*j);           
            //cout<<(sqrt(i))<<", typeid(sqrt(i) = "<< typeid(sqrt(i)).name() <<endl; //if i =4 -> 2, d
        }
        for(int i = 0; i < ary_1d.size(); i++) {
            cout << setfill('0')<< setw(N) << ary_1d[i] << endl;
        }
    }

   //system("pause");
   return 0;
   }

