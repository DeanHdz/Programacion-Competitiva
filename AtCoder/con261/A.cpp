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
 
    ll l1,l2,r1,r2,res;
    cin >> l1 >> r1 >> l2 >> r2;

    if(r1 <= l2 || r2 <= l1)
        res = 0;
    else{
    if(l1 >= l2){
        if( r1 >= r2){
            res = r2 - l1;
        }else{
            res = r1 - l1;
        }
    }else{
        if( r1 >= r2){
            res = r2 - l2;
        }
        else{
            res = r1 - l2;
        }
     }
    }

    cout << res;
}
