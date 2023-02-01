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
        float dif2;
        int x,y,dif; cin >> x >> y;

        if(max(x,y) - min(x,y) <= 2)
            dif=1;
        else{
            if(x <= y){
                dif = (y-x) / 2;
                dif2 = ((float)y-(float)x) / 2;
                if(dif < dif2)
                    dif++;
            }
            else{
                dif = (x-y) / 2;
                dif2 = ((float)x-(float)y) / 2;
                if(dif < dif2)
                    dif++;
            }
        }

        cout << dif << "\n";
    }
}