/* Fucking Brute-force approch*/
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
int right(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(i+j+k==n){
                    if(i*i+j*j==k*k){
                        cnt++;
                    }
                }
            }
        }
    }
    return cnt;
}
int main(int argc, char const *argv[]){
    lightSpeed();
    int ans=right(840);
    map<int,int> mp;
    cout<<ans;
}
