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
bool p(int n){
	int rev =0;
	int temp = n;
	while(temp!=0){
		rev = (rev*10)+(temp%10);
		temp/=10;a
	}
	return (rev==n);
}
int main(int argc, char const *argv[]){
	lightSpeed();
	int ans=0;
	for(int i=100;i<=999;i++){
		for(int j=100;j<=999;j++){
			int a = i;
			int b = j;
			int n = a*b;
			if(p(n)==1){
				ans = max(ans,n);
			}
		}
	}
	cout<<ans;
}
