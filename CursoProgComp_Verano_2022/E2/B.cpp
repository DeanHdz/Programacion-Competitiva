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
    vector<int> output;
    while(t--){
        int n,out=0;
        int smallest = -1;
        vector<int> b;
        cin >> n;
        for(int i=0;i<n;i++){
            int input; cin >> input;
            if(smallest == -1)
                smallest = input;
            else if(input < smallest)
                smallest = input;
            b.push_back(input);
        }
        for(int i=0;i<n;i++){
            if(b[i] > smallest)
                out += b[i] - smallest;
        }
        output.push_back(out);
    }
    for(auto o : output){
        cout << o << "\n";
    }
}

