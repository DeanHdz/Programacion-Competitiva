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
 
int main()
{
    fast
 
    int t; cin >> t;
    while(t--){
        ll x,y,n,r; cin >> x >> y >> n >> r;
        ll nor=0,pre=n,np=0;

    
        
    }
}

/*

while(1){
            if(r >= (pre*y + nor*x))
                break;
            else{
                pre--;
                nor++;
                if(nor > n){
                    np=1;
                    break;
                }
            }
        }
        if(np)
            cout << -1 << "\n";
        else
            cout << nor << " " << pre << "\n";

*/


/*pre = r % y;
        if(pre <= n){
            //Ver si es posible rellenar con normales
            r -= pre*y;
            nor = r % x;
            if(pre+nor >= n){

            }
            else{
                cout << -1 << "\n";
            }
        }
        else{
            //Ya se ajustaron la cantidad necesaria de burguers pero con puro premium
            cout << 0 << " " << n << "\n";
        }*/