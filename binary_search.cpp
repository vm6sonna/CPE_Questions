#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int binarySearch(const int* list, int len, int searchItem){
    int res;
    bool found = false; // assume： not find 
    int first = 0, mid, last = len-1;    
    // termination condition： first > last or found it
    while(!(first>last) && !found){
        mid = (first+last)/2;
        cout<< "first："<<first<<", mid："<<mid<<", last："<<last<<endl; 
        if(list[mid]==searchItem){
            res = searchItem;
            found = true;
            break;
        }
        else if(searchItem<list[mid]) // item 在左邊 
        {
            last = mid-1;
        }
        else{   // item 在右邊 
            first = mid +1;
        } 
    }
    if(found) return res;
    else return -1;
}

int main(void) {
    int list[12] = {2, 7, 15, 23 , 29, 35, 39, 66, 78, 90, 110, 123};
    int searchItem;
    int len = sizeof(list)/sizeof(int); // 12
    //cout<<len;
    cout<<"please enter the item：\n";
    cin>>searchItem;
    cout<< binarySearch(list, len, searchItem);   
    
    
   //system("pause");
   return 0;
   }

