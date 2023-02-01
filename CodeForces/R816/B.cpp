// https://codeforces.com/contest/1715/problem/B

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
 
    ull t; cin>>t;
    while(t--){
        ull n,k,b,s; cin>>n>>k>>b>>s;

        if(b == s/k){
            for(int i=0;i<(n-1);i++){
                cout << 0 << " ";
            }
            cout << s << "\n";
        }
        else if( (((k-1) * n) + (k*b)) < s || s < (k*b)){
            cout << -1 << "\n";
        }
        else{
            vector<ull> a(n);
            a[n-1] = k*b;
            ull relleno = s - k*b; 
            for(int i=0;i<n;i++){
                if(relleno != 0){
                 if(relleno >= k-1){
                    a[i] += k-1;
                    relleno -= k-1;
                 }
                 else
                 {
                    a[i] += relleno;
                    relleno = 0;
                 }
                }
                cout << a[i] << " ";
            }
            cout << "\n";
        }

    }
}