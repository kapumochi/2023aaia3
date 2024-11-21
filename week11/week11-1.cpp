//Week11-1.cpp

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

	n= bobo(bobo(bobo(n)));
	cout << n << endl;
	}
}
