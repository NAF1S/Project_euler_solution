/* Did with bullshit Brute force approch */
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
vector<int> digit(int n){
    vector<int> dig;
    while(n!=0){
        int k = n%10;
        dig.pb(k);
        n/=10;
    }
    reverse(dig.begin(), dig.end());
    return dig;
}
char ascii(int n){
    return 48+n;
}
int main(int argc, char const *argv[]){
    lightSpeed();
    vector<char> fraction;
    //fraction[0]=0;
    for(int i=1;i<=10000000;i++){
        vector<int> dig = digit(i);
        for(int x:dig){
            char c = ascii(x);
            fraction.pb(c);
        }
    }
    int ANS=1;
    int n=1;
    for(int i=1;i<=7;i++){
        int d = fraction[n-1]-'0';
        //cout<<fraction[n-1]<<" ";
        ANS*=d;
        n*=10;
    }
    
    
}
