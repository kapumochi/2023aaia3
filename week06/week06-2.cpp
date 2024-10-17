#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a;

	int now;
	while( cin >> now ){ //01_input
        a.push_back(now); //03_vector
        sort(a.begin(), a.end()); //05_sort

        int N = a.size(); //06
        if(N%2 == 1) cout << a[N/2] << "\n";//06
        else cout << (a[N/2-1] + a[N/2])/2 << "\n";//06
        //for(int b:a) cout << b << ' ';
        //cout << "\n"; //04_print array ¦L¥X°}¦C
		//cout << now << "\n"; //02_output
	}
}
