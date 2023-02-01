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

    string s,t;

    cin >> s >> t;

    if(s.size() != t.size()){
        cout << "NO";
    }else
    {
        reverse(all(t));
        if(s != t){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }
}