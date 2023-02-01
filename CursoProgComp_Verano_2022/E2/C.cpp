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
        int n,m; cin >> n >> m;
        int min = m*25;
        vector<string> words;
        for(int i=0;i<n;i++){
            string input; cin >> input;
            words.push_back(input);
        }   
        for(int i=0; i<n-1; i++){
            for(int j=i+1;j<n;j++){
                int comparison=0;
                for(int k=0;k<m;k++){
                    comparison += abs((int)words[i][k] - (int)words[j][k]);
                }
                if(comparison < min)
                    min = comparison;
            }
        }
        output.push_back(min);
    }
    for(auto o : output){
        cout << o << "\n";
    }
}

