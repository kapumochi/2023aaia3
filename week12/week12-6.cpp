#include <iostream>
using namespace std;

int a[10000];//二維矩陣合併為一維矩陣

int main()
{
	int N,T;
	cin >> T;
	for(int t=1;t<=T; t++){
		char c, c2;
		cin >> c >> c2 >> N; //每次有新矩陣時,input都會放一個 N = ?,所以在迴圈裏面
		for(int i=0; i<N*N; i++) cin >> a[i];//輸入矩陣
		int bad=0; //決定是不是對稱矩陣的變數
		
		for(int i=0; i<N*N; i++){ //判斷式
			if(a[i]<0) bad=1;
			if(a[i] != a[N*N-1-i]) bad=1;
		}
		if(bad==0) cout << "Test #" << t << ": Symmetric.\n";
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}
}
