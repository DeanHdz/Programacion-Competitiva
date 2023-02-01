//https://www.programmerall.com/article/12332484092/

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
const ll inf = 1e17 + 10;
ll sum[maxn];
int a[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            if(i > a[i]) sum[i]++;
            sum[i] += sum[i-1];
        }
        ll ans = 0;
        for(int i=1; i<=n; i++)
            if(i > a[i] && a[i]) ans += sum[a[i] - 1];
        cout << ans << '\n';
        for(int i=0; i<=n; i++) sum[i] = 0;
    }
    return 0;
}