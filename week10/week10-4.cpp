//week10-4.cpp

#include <iostream>
using namespace std;

int main()
{
	double high, weight;
	cin >> high >> weight;

	double bmi = weight/(high*high);
	cout << bmi << "\n";

	if(bmi < 18.5) cout << "too thin";
	else if (bmi < 24) cout << "standard";
	else cout << "too fat";
}
