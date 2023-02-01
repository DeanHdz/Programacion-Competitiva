//Problema todo feo y mal redactado, codigo "no sirve"


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

    int t; cin >> t;
    vector<int> out;
    while(t--){
        int n; cin >> n;
        int res=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int input; cin >> input;
            m[input] += 1;
        }
        for(auto ma : m){
            int key = ma.first;
            if( m[key] % 2 == 1){
                res++;
            }
        }
        if(res == 0)
            res = 2;
        out.push_back(res);
    }
    for(auto o : out){
        cout << o << "\n";
    }
}

