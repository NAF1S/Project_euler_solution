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

int main(){
	lightSpeed();
	ll ans=0;
    vector<vector<int>> path(15,vector<int> (0));
    //
    for(int i=0;i<15;i++){
    	for(int j=0;j<i+1;j++){
    		int x;cin>>x;
    		path[i].pb(x);
    	}
    }
    int x=0;
    int y=0;
    for(int i=0;i<14;i++){
    	if(path[x+1][y]>=path[x+1][y+1]){
    		x++;
    		
    	}
    	else{
    		x++;
    		y++;
    	}
    	//cout<<x<<" "<<y<<" ";
    	ans+=path[x][y];
    }
    //cout<<ans+path[0][0];
    for(int i=14;i>=0;i--){
    	int x = path[i][i-1];
    	for(int j=)
    }
}
