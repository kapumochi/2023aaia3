#include <iostream>
using namespace std;

int a[100][100];//Step03 2D Array

int main()
{
	int N,T;
	cin >> T;//Step01 Input
	for(int t=1;t<=T; t++){
		char c, c2;
		cin >> c >> c2 >> N;
		//Step03 2D Array
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j];
			}
		}
		int bad=0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(a[i][j]<0) bad = 1; //題目說不能有負數
				if(a[i][j] != a[N-1-i][N-1-j]) bad =1; //檢查對稱矩陣
			}
		}

		if(bad==0) cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}//Step02 Output
}
