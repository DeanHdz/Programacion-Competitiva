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

    int a,b,c,d,t; cin >> t;
    vector<int> output;

    while(t--){
        cin >> a >> b >> c >> d;
        int sum=0;
        if(a<b)
         sum++;
        if(a<c)
        sum++;
        if(a<d)
        sum++;
        output.push_back(sum);
    }
    for(auto o : output){
        cout << o << "\n";
    }
}

