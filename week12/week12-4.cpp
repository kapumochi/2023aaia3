#include <iostream>
using namespace std;

int a[100][100];//Step03 2D Array

int main()
{
	int N,T;
	cin >> T;//Step01 Input
	for(int t=0;t<=T; t++){
		char c, c2;
		cin >> c >> c2 >> N;
		//Step03 2D Array
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j];
			}
		}
		cout << "Test #" << t << "Symmetric.\n";
	}//Step02 Output
}
