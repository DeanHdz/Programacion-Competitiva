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
 
    int t;cin>>t;
    vector<string> out;
    while(t--){
        int n; cin >> n;
        vector<string> s;
        string res = "";
        bool cond;
        for(int i=0;i<n;i++){
            string input; cin >> input;
            s.push_back(input);
        }
        for(int i=0;i<n;i++){
            cond = 0;
            for(int j=0; j<n && cond == 0;j++){
                if(i != j) //Verificar que no sea una comparacion entre la misma cadena
                {
                    for(int k=0; k<n && cond == 0;k++){
                        if( i != k){
                            if(s[i] == (s[j]+s[k]))
                            {
                                cond = 1;
                                break;
                            }
                        }
                    }
                }
            }
            res.append(to_string(cond)); //Agregar resultado de caso a res
        }
        out.push_back(res); //Entregar resultado a output
    }
    for(auto o : out){
        cout<<o<<"\n";
    }
}
*/