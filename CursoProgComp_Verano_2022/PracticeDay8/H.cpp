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

    int n,x;
    ull total=0;
    cin >> n >> x;
    vector<ull> subject;

    for(int i=0;i<n;i++){
        ull input; cin >> input;
        subject.push_back(input);
    }

    sort(all(subject));

    for(auto &s : subject)
    {
        total += (x)*(s);
        if(x != 1)
            x--;
    }

    cout << total;
}