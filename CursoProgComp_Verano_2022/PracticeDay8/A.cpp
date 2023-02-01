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
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
#define all(container) begin(container), end(container)
#define F first
#define S second
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using ull = unsigned long long;
using ll = long long;

using namespace std;

int main()
{
    fast

    ll a1,a2,a3,a4; cin >> a1 >> a2 >> a3 >> a4;
    ll count=0;

    string s; cin >> s;

   for(int i=0; i<s.size();i++){
    if(s[i] == '1')
        count += a1;
    else if(s[i] == '2')
        count += a2;
    else if(s[i] == '3')
        count += a3;
    else if(s[i] == '4')
        count += a4;
   } 

   cout << count;


}