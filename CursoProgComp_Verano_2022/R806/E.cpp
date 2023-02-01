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
const ll maxn = 110;
const ll inf = 1e17 + 10;
int vis[maxn][maxn];
string s[maxn];

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
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) vis[i][j] = 0;
        for(int i=0; i<n; i++) cin >> s[i];
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(vis[i][j]) continue;
                int f = 0;
                f += s[i][j] - '0';
                vis[i][j] = 1;
                f += s[n-i-1][n-j-1] - '0';
                vis[n-i-1][n-j-1] = 1;
                f += s[j][n-i-1] - '0';
                vis[j][n-i-1] = 1;
                f += s[n-j-1][i] - '0';
                vis[n-j-1][i] = 1;
                ans += min(f, 4 - f);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}



/*

//Not working

#include <iostream>
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

const int N = 101;
 
int main()
{
    //fast
 
    int t; cin >> t;
    vector<int> out;

    while(t--){
        int n,res=0;
        cin>>n;
        int arr[N][N];

        if(n == 1)
            out.push_back(0);
        else{

        for(int i=0;i<n;i++){
            string s; cin >> s;
            for(int j=0;j<n;j++){
                arr[i][j] = int(s[j]);
                //cout << "Done receiving one\n";
                }
            //cout << "Done receving line\n";
        }

        //cout << "Done receiving\n";
            
        if(n % 2 == 1) //Implementacion con matriz odd n
        {
            for(int i=0;i<n/2+1;i++){
                for(int j=0;j<n/2+1;j++){
                    int aux=0;
                    if(arr[i][j] == 1){
                    if(arr[n-1-i][n-1] != 1)
                        aux++;
                    if(arr[n-1][n-1-j] != 1)
                        aux++;
                    if(arr[n-1-i][n-1-j] != 1)
                        aux++;
                    if(aux <= 2)
                        res += aux;
                    else
                        res += aux- 2;
                    }
                    else if(arr[i][j] == 0){
                    if(arr[n-1-i][n-1] != 0)
                        aux++;
                    if(arr[n-1][n-1-j] != 0)
                        aux++;
                    if(arr[n-1-i][n-1-j] != 0)
                        aux++;
                    if(aux <= 2)
                        res += aux;
                    else
                        res += aux - 2;
                    }
                }    
            }
        }
        else{ //Implementacion con matriz even

        for(int i=0;i<n/2;i++){
            for(int j=0;j<n/2;j++){
                int aux=0;
                if(arr[i][j] == 1){
                    if(arr[n-1-i][n-1] != 1)
                        aux++;
                    if(arr[n-1][n-1-j] != 1)
                        aux++;
                    if(arr[n-1-i][n-1-j] != 1)
                        aux++;
                    if(aux <= 2)
                        res += aux;
                    else
                        res += aux- 2;
                }
                else if(arr[i][j] == 0){
                    if(arr[n-1-i][n-1] != 0)
                        aux++;
                    if(arr[n-1][n-1-j] != 0)
                        aux++;
                    if(arr[n-1-i][n-1-j] != 0)
                        aux++;
                    if(aux <= 2)
                        res += aux;
                    else
                        res += aux - 2;
                }
            }
        }

        }

        out.push_back(res);
        }
    }
    
    for(auto o : out){
        cout << o << "\n";
    }
}

*/