//NO SIRVE,,, respuesta correcta de otro abajo   https://atcoder.jp/contests/abc261/tasks/abc261_e

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
    
    ull n,c,x; cin >> n >> c;

    vector<pair<int,int>> p;
    map< int,pair<int,int>> m;
    vector<ull> out;

    for(int i=0;i<n;i++){
        ll f,s; cin >> f >> s;
        p.push_back({f,s});
    }

    for(int i=1;i<=n;i++){
        int start=0;
        x = c;
        if(m[c].first != 0)
        {
            start = m[c].first;
            x = m[c].second;
        }
        for(;start<i;start++){
            if(p[start].first == 1){
            x = (x & p[start].second);
            }else if(p[start].first == 2){
            x = (x | p[start].second);
            }else if(p[start].first == 3){
            x = (x ^ p[start].second);
            }
        }
        m[c].first = start;
        m[c].second = x;

        out.push_back(x);
        c = x;
    }
    for(auto o : out){
        cout << o << "\n";
    }
}*/

#include<bits/stdc++.h>
#define N 500005
using namespace std;
int n,c,t[N],a[N],change[N][35][2];
signed main()
{
	cin>>n>>c;
	for(int i=1;i<=n;i++) cin>>t[i]>>a[i];
	for(int i=0;i<=30;i++)
		change[0][i][0]=0,change[0][i][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=30;j++)
		{
			change[i][j][0]=change[i-1][j][0];
			change[i][j][1]=change[i-1][j][1];
			if(t[i]==1)
			{
				change[i][j][0]&=(a[i]>>j&1);
				change[i][j][1]&=(a[i]>>j&1);
			}
			if(t[i]==2)
			{
				change[i][j][0]|=(a[i]>>j&1);
				change[i][j][1]|=(a[i]>>j&1);
			}
			if(t[i]==3)
			{
				change[i][j][0]^=(a[i]>>j&1);
				change[i][j][1]^=(a[i]>>j&1);
			}
		}
		int sum=0;
		for(int j=0;j<=30;j++) sum+=change[i][j][(c>>j&1)]<<j;
		cout<<(c=sum)<<endl;
	}
	return 0;
}