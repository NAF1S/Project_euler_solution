// C++ program to find repeating
// sequence in a fraction
#include <bits/stdc++.h>
using namespace std;

// This function returns repeating sequence of
// a fraction. If repeating sequence doesn't
// exist, then returns empty string
string fractionToDecimal(int numr, int denr)
{
	string res; 
	map<int, int> mp;
	mp.clear();
	int rem = numr % denr;
	while ((rem != 0) && (mp.find(rem) == mp.end()))
	{
		// Store this remainder
		mp[rem] = res.length();

		// Multiply remainder with 10
		rem = rem * 10;

		// Append rem / denr to result
		int res_part = rem / denr;
		res += to_string(res_part);

		// Update remainder
		rem = rem % denr;
	}

	return (rem == 0) ? "" : res.substr(mp[rem]);
}

// Driver code
int main()
{
	int mx=0;
	map<int,int> cycle;
	for(int i=1;i<1000;i++){
		string num = fractionToDecimal(1,i);
		int sz = num.length();
		cycle[sz] = i;
		mx = max(mx,sz);
	}
	cout<<cycle[mx];
}
