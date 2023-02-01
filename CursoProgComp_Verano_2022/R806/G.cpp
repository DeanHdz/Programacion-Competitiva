// https://www.programmerall.com/article/12332484092/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <deque>
#include <stack>
using namespace std;
typedef long long ll;
#define pii pair<int, int>
const ll maxn = 2e5 + 10;
const ll inf = 1e16;
ll a[maxn][35];
ll dp[maxn][35];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        for(int i=1; i<=n; i++) for(int j=0; j<=32; j++) dp[i][j] = -inf;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i][0];
            for(int j=1; j<=32; j++)
                a[i][j] = a[i][j-1] >> 1;
        }
        dp[0][0] = 0;
        ll ans = 0;
        for(int i=1; i<=n; i++)
        {
            dp[i][0] = dp[i-1][0] - k + a[i][0];
            ans = max(ans, dp[i][0]);
            for(int j=1; j<=min(32, i); j++)
            {
                dp[i][j] = max({dp[i][j], dp[i-1][j] - k + a[i][j], dp[i-1][j-1] + a[i][j]});
            }
            dp[i][32] = max(dp[i][32], dp[i-1][32]);
        }
        for(int i=0; i<=32; i++) ans = max(ans, dp[n][i]);
        cout << ans << endl;
    }
    return 0;
}