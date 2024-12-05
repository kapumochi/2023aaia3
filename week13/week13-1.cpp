//week13-1.cpp UVA10035 not OK
#include <iostream>
using namespace std;

int helper(int a, int b)
{
	return 3;
}

int main()
{
	int a, b;
	while(cin >> a >> b){ //(01)input
		if(a==0 && b==0) break;\

		int ans = helper(a, b); //(03) specific function

		if(ans == 0) cout << "No carry operation.\n";
		else if(ans == 1) cout << "I carry operation.\n";
		else cout << ans << " carry operation.\n"; //(02)output
	}
}
