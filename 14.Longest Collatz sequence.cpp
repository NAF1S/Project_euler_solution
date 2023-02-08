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
const long long l = 1e6;
ll collatz(ll n){
    ll cnt=0;
    while(n!=1){
        if(n%2==0){
            n/=2;
            cnt++;
        }
        else n=3*n+1;
        cnt++;
    }
    return cnt;
}
int main(int argc, char const *argv[]){
    lightSpeed();
    ll ans=0;
    map<ll,ll> mp;
    for(int i=1;i<=l;i++){
        ll n = collatz(i);
        mp.insert(make_pair(n,i));
        ans = max(ans,n);
    }
    //cout<<ans;
    //cout<<nl;
    cout<<mp[ans];
    
}
