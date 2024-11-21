//Week11-1.cpp Step 02 bo pi fa

#include <iostream>
using namespace std;

int bobo(int n){
	int ans =0;
	while(n>0){
		ans += n%10;
		n = n/10;
	}
	return ans;
}

int main()
{
	int n;
	while( cin >> n ){
	if(n==0) break;

	n= bobo(n);
	cout << n << endl;
	}
}
