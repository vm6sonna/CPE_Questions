#include<iostream>

using namespace std;

char cal(int n){
	//cout<< (char) n;
	if(n==10)
		return 'A';
	if(n==11)
		return 'B';
	if(n==12)
		return 'C';
	if(n==13)
		return 'D';
	if(n==14)
		return 'E';
	if(n==15)
		return 'F';
	// ���~! (char) n;
	// [���n] int��char�g�k�G int n + '0' 
	else return n+'0'; 										
}
int main(){
	//cal(6);
	// 1. ��J
	char str[1024];
	cin>>str;
	
	// 2. str -> 16�i��
	//cout<<str<<endl;
	for(int i=0; str[i]; i++){
		//cout<<(int)str[i]<< " "<<(int)str[i]/16<<" ";
		cout<<cal((int)str[i]/16)<<cal((int)str[i]%16)<< " ";
	}
	cout<<endl;
	return 0;

}
