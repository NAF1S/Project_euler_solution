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

int bruteforce(int a[15][15],int i,int j,int row,int col){
    if(j==col){
        return 0;
    }
    if(i==row-1){
        return a[i][j];
    }
    return a[i][j]+max(bruteforce(a,i+1,j,row,col),bruteforce(a,i+1,j+1,row,col));
}

int main(){
    int mat[15][15];
    for(int i=0;i<15;i++){
        for(int j=0;j<i+1;j++){
            cin>>mat[i][j];
        }
    }
    cout<<bruteforce(mat,0,0,15,15);
}
