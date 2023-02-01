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
    vector<pair<int,int>> out;
    while(t--){
        int x,y;
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin >> arr[i][j];
            }
        }
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                //cout << "leyendo: " << arr[i][j] << i << j << "\n"; 
                if(arr[i][j] == '#' && arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#')
                {
                        //cout << "Entro!" << "\n";
                        x = i+1;
                        y = j+1;
                }
            }
        }
        out.push_back({x,y});
    }
    for(auto o : out){
        cout << o.first << " " << o.second << "\n";
    }
}

