#include <stdio.h>
#include "stdio.h"
#include <stdlib.h>
#include<iostream>
using namespace std;

//Sample Input
//3
//Spain Donna Elvira
//England Jane Doe
//Spain Donna Anna
int main(void) {
	int n;
	char country[76];
	char name[2001];
	string b[2001][76];
	int num=0;
	string s;
	cin>>n;
	while(n--){	
		//gets(name); // gets  --> cin.getline
		// cin>>country;
		getline(cin, s); // 需清空資料緩衝區
		for(int i=0; i<n; i++){
			getline(cin, b[i]);
			while(getline(cin, b[i], ' ')){
					b[i] = ;
			}
		}
		// cin>>b[0];
		// cin.get(country, 75);
		// cout<<country<<endl;
		// cout<<"name = "<<name<<endl;
		cout<<b[0]<<endl;	
	}


   //system("pause");
   return 0;
   }

