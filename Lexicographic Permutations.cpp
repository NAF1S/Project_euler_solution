#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define pb push_back
#define pi acos(-1)
#define fi first
#define se second
#define lightSpeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll inf = 1e12;
using namespace std;
#define N 1000
//101101
//100000
//1 + (2+3)+(4+5)+(6+7)+
int h,w;
bool valid(int x,int y){
    if(x<=h-1 && y<=w-1)return true;
    return false;
}

int main(){
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    //int cnt[3] = {0,1,2};
    int cnt = 1;
    while(next_permutation(num,num+10)){
        cnt++;
        if(cnt==1000000){
            for(int i=0;i<10;i++)cout<<num[i];
            return 0;
        }
    }
}
