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
const ll MAX = 1e5;
int main(){
	lightSpeed();
	ll ans=0;
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				for(int a=0;a<=9;a++){
					ll cnt = pow(i,5)+pow(j,5)+pow(k,5)+pow(a,5);
						    ll num = i*1000+j*100+k*10+a;
						    if(cnt==num){
							ans+=num;
							cout<<num<<" ";
				}
				}
			}
		}
	}
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				for(int a=0;a<=9;a++){
					for(int b=0;b<=9;b++){
						ll cnt = pow(i,5)+pow(j,5)+pow(k,5)+pow(a,5)+pow(b,5);
						    ll num = i*10000+j*1000+k*100+a*10+b;
						    if(cnt==num){
							ans+=num;
							cout<<num<<" ";
					}
					}
				}
			}
		}
	}
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				for(int a=0;a<=9;a++){
					for(int b=0;b<=9;b++){
						for(int c=0;c<=9;c++){
							ll cnt = pow(i,5)+pow(j,5)+pow(k,5)+pow(a,5)+pow(b,5)+pow(c,5);
						    ll num = i*100000+j*10000+k*1000+a*100+b*10+c;
						    if(cnt==num){
							ans+=num;
							cout<<num<<" ";
						    }
						}
					}
				}
			}
		}
	}
	cout<<nl;

	cout<<ans;
}
