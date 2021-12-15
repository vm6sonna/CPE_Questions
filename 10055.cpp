#include <iostream>
#include <stdlib.h> // llabs
using namespace std;

/*
In C, only the int version exists.
For the long int equivalent see labs.
For the long long int equivalent see llabs.
*/
int main()
{
	long long int h;
    long long int O;
  	while (cin>> h>>O)
    {        
       //cout << llabs(Opponum-hashmutNum) <<endl;
       if(h>O)
       		cout<< h-O<<endl;
       else
       		cout<<O-h<<endl;
    }
    
    return 0;
}