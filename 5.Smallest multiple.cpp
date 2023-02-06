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
ll lcm(ll a,ll b){
    ll l = a*b;
    l/=__gcd(a,b);
    return l;
}
int main(int argc, char const *argv[]){
    lightSpeed();
    ll n = 20;
    ll ans=1;
    for(int i=1;i<=n;i++){
        ans=lcm(ans,i);
    }
    cout<<ans;
}
