
/* I solved this problem using table dp,it can also be solve using normal method(permutation).*/


#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define first f
#define second s
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const unsigned int mod = 1000000007;
void getdata(){
	ll n,m;
    cin>>n>>m;
    ll dp[n][m];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
    	dp[i][0]=1;
    	dp[0][i]=1;
    }
    for(int i=1;i<n;i++){
    	for(int j=1;j<m;j++){
    		dp[i][j]=dp[i-1][j]+dp[i][j-1];
    		//cout<<dp[i][j]<<" ";
    	}
    	//cout<<nl;
    }
    cout<<dp[n-1][m-1];
}
int main(int argc, char const *argv[]){
	lightSpeed();
    getdata();
    
}
