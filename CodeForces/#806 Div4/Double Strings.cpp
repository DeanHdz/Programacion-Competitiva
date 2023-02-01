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
string s[maxn];
map<string, int>mp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        mp.clear();
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
            mp[s[i]] = 1;
        }
        for(int i=0; i<n; i++)
        {
            string now = "";
            int f = 0;
            for(int j=1; f == 0 && j<s[i].length(); j++)
            {
                now += s[i][j-1];
                if(mp[now] && mp[string(s[i], j, s[i].length() - j)])
                    f = 1;
            }
            cout << f;
        }
        cout << '\n';
    }
    return 0;
}