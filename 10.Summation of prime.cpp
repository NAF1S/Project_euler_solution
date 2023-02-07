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
const long long n = 2e6;
void seive(){
      vector<bool> is_prime(n+1, true);
      is_prime[0] = is_prime[1] = false;
      for (int i = 2; i * i <= n; i++) {
          if (is_prime[i]) {
              for (int j = i * i; j <= n; j += i)
                  is_prime[j] = false;
    }
}
      ll sum=0;
      for(int i=0;i<=n;i++){
	      if(is_prime[i]){
		      sum+=i;
	}
}
      cout<<sum;
}
int main(int argc, char const *argv[]){
	lightSpeed();
	seive();
}
