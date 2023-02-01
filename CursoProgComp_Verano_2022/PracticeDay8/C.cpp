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
    int n; cin >> n;
    string s,code; cin >> s;

    for(int i=0; i<n;i++){
        if(n % 2 == 0){
            if(i % 2 == 0)
                code.insert(0,1,s[i]);
            else
                code.push_back(s[i]);
        }
        else{
            if(i % 2 == 0)
                code.push_back(s[i]);
            else
                code.insert(0,1,s[i]);
        }
    }

    cout << code;
}