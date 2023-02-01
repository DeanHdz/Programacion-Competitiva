//Incompleto... respuesta abajo https://atcoder.jp/contests/abc261/tasks/abc261_d

/*#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>
// include <bits/stdc++.h>
 
// CONVENIENCE
#define inputarr(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) for(int i = 0; i < n; i++) cout << arr[i] << ' ';
#define all(container) begin(container), end(container)
#define F first
#define S second
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fast ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
 
using ull = unsigned long long;
using ll = long long;
 
using namespace std;
 
int main()
{
    fast
 
    ll n,m,counter; cin >> n >> m;
    counter=0;
    ll toses[n];
    ll streaks[m];

    //input
    for(int i=0;i<n;i++){
        cin >> toses[i];
    }
    for(int i=0;i<m;i++){
        cin >> streaks[i];
    }

    //Calculation
    for(int i=0;i<n;i++){
        
    }
}*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, a, b) for(int i = (a); i <= (b); i++)
#define cl(i, n) i.clear(),i.resize(n);
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
const int inf = 1e9;
int n, m;
int x[5010],c[5010],y[5010],awd[5010];
int dp[5010][5010][2], awds[5010];
//bool vis[5010];
//int lst[5010], nxt[5010];
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;f(i,1,n)cin>>x[i];
    f(i,1,m){
        cin>>c[i]>>y[i]; awd[c[i]]+=y[i]; 
    }
    int ans=0;
    dp[0][0][0]=0;
    f(i,1,n){/*
        awds[i]=awds[i-1]+awd[i]; //cout<<awds[i]<<" \n"[i==n];
        dp[0]+=(x[i]+awd[i]); lst[i]=0,nxt[i]=n+1;*/
        f(j,1,i){
            dp[i][0][0]=max(dp[i][0][0],dp[i-1][j][1]); //cout<<i<<" "<<0<<" "<<0<<" "<<dp[i][0][0]<<endl;
        }
        
        f(j,1,i){
            
        //    cout<<i-1<<" "<<j-1<<" "<<dp[i-1][j-1][(j-1?1:0)]<<" "<<x[i]<<" "<<awd[j]<<endl;
     //   cout<<dp[5][4][1]<<" "<<i-1<<" "<<j-1<<" "<<(j-1?1:0)<<" "<<dp[i-1][j-1][(j-1?1:0)]<<" "<<x[i]<<" "<<awd[j]<<endl;
            dp[i][j][1]=max(dp[i][j][1],dp[i-1][j-1][(j-1?1:0)]+x[i]+awd[j]);
         //   if(i==5&&j==4)cout<<dp[i][j][1]<<endl;
        //    cout<<i<<" "<<j<<" "<<dp[i][j][1]<<endl;
            if(i==n)ans=max(ans,dp[i][j][1]);
        }
        
    }
//    cout<<dp[5][4][1]<<endl;
    cout<<ans<<endl;
    return 0;
}
