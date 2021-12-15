#include <iostream>
#include <vector>

using namespace std;

vector < vector<int> > ba(int n){
	int basNUm=0;
	vector<int> row(20, 0);
    vector< vector<int> > array_2D;
    array_2D.assign(20, row);

	for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j==0) {array_2D[i][j]=1; continue;}
            else if(j==i) {array_2D[i][j]=1; continue;}
        	else array_2D[i][j] = array_2D[i-1][j-1]+array_2D[i-1][j];
        }
    }
	return array_2D;
}

int main(){
	//cout<<"N=";
    int N; cin>>N;
    vector< vector<int> > array_2D;
    array_2D = ba(N);
    
    // 尋訪：使用iterator
    //1. 使用足標運算子 function member - at
    for(int i=0; i<=N; i++){
        for(int j=0; j<=i; j++){
            cout <<" "<<array_2D[i][j];
        } 
        cout << endl;
    }

	// i=row num; j=element
	return 0;
}

