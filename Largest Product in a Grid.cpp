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
#define N 10000000
using namespace std;

/*
3
7 4
2 4 6
8 5 9 3
*/
const long long n = 1000000;

int main(){
    int n=20;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int mx=0;
    //row wise search
    for(int row=0;row<n;row++){
        for(int c=0;c<n-4;c++){
            mx = max(mx,mat[row][c]*mat[row][c+1]*mat[row][c+2]*mat[row][c+3]);
        }
    }
    //column wise search
    for(int c=0;c<n;c++){
        for(int r=0;r<n-4;r++){
            mx = max(mx,(mat[r][c]*mat[r][c+1]*mat[r][c+2]*mat[r][c+3]));
        }
    }
    //diagonal check left -> right
    for(int i=3;i<n;i++){
        int a=0,b=i;
        vector<int>cnt;
        for(int k=0;k<=i;k++){
            cnt.pb(mat[a++][b--]);
        }
        for(int k=0;k<cnt.size()-4;k++){
            mx = max(mx,cnt[k]*cnt[k+1]*cnt[k+2]*cnt[k+3]);
        }
    }
    for(int i=16;i>=0;i--){
        int a=0,b=i;
        vector<int>cnt;
        for(int k=0;k<n-i;k++){
            cnt.pb(mat[a++][b++]);
        }
        for(int k=0;k<cnt.size()-4;k++){
            mx = max(mx,cnt[k]*cnt[k+1]*cnt[k+2]*cnt[k+3]);
        }
    }
    cout<<mx;
}
