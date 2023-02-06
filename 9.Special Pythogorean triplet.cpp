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
    int n=0;
    for(int i=1;i<=1000;i++){
        for(int j=i+1;j<=1000;j++){
            for(int k=j+1;k<=1000;k++){
                if(i+j+k==1000){
                    if(i*i+j*j==k*k){
                        cout<<i*j*k;
                        break;
                    }
                }
            }
        }
    }
}
