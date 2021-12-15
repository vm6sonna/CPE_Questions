#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

void show_vec(vector<int> &vec){
    // show vector
    for(auto ele:vec){
        cout<<ele<<" "; 
    }
}

void sort_vec(vector<int> &vec){
    int i,j, tmp;
    for(i=0; i<vec.size(); i++){
        for(j=i+1;j<vec.size();j++){
            if(vec[i]>vec[j]){
                // do swap()
                tmp = vec[i];
                vec[i] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}
int main(void) {
    int n, i;
    int num;
    
    while(cin>>n){
        // create a n-length vector with initial value = 0
        vector<int> vec(n); 
        i=0;
        while(n){
            // cin>>num;
            // vec.push_back(num);  // bad!-> 0 0 0 0 4 3 2 1
            //vec.insert(vec.begin(), num);   // bad -> 1 2 3 4 0 0 0 0
            cin>>num;
            vec[i] = num;
            n--;
            i++;
        }
        //show_vec(vec);
        
        sort_vec(vec);
        show_vec(vec);
        cout<<endl;
    }
   //system("pause");
   return 0;
   }

