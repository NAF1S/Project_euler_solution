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

int main(int argc, char const *argv[]){
	  lightSpeed();
    ll n = 1001*1001;
    ll res=0;
    int k=1;
    for(ll i=1;i<n+1;i+=2*(k-1)){
    	res+=i;
    	k++;
    }
    ll q=1;
    ll cnt=0;
    for(ll i=1;i<n+1;i+=4*(q-1)){
    	res+=i;
    	cnt++;
    	if(cnt==2){
    		cnt=0;
    		q++;
    	}
    }
    cout<<res-2;
}
