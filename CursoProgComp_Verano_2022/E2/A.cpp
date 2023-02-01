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

    string s;
    vector<string> output; 
    int t; cin >> t;

    while(t--){
        cin >> s;
        int sum1,sum2;
        sum1 = (int)s[0] + (int)s[1] + (int)s[2];
        sum2 = (int)s[3] + (int)s[4] + (int)s[5];
        if(sum1 == sum2)
            output.push_back("YES");
        else
            output.push_back("NO");
            
    }
    for(auto o : output){
        cout << o << "\n";
    }
}

