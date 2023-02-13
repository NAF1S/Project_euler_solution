#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define first f
#define second s
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int M = 1000000007;
ll bionomial(ll n,ll r){
	if(2*r>n)
		r=n-r;
	ll res=1;
	for(int i=1;i<=r;n--,i++){
		res*=n;
		res/=i;
	}
	return res;
}
int main(int argc, char const *argv[]){
	lightSpeed();
    ll ans = bionomial(40,20);
    cout<<ans;
}
