#include <iostream>
#include <string>
#include <string.h>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <numeric>
//#include <map>
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
 
    int t; cin >> t; //test cases
    while(t--){
        ull n,c,q; cin >> n >> c >> q; //length string s, number copypaste operations, number queries
        string s; 
           
        cin >> s;
        
        while(c--){
            ull l,r; cin >> l >> r;
            s.append(s.substr(l-1,r-l+1));
            //cout << s << "\n";
        }
        while(q--){
            ull input; cin >> input;
            cout << s.at(input-1) << "\n";
        }
    }
}