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
#define inputarr(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) for(int i = 0; i < n; i++) cout << arr[i] << ' ';
#define all(container) begin(container), end(container)
#define F first
#define S second
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fast ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
 
using ull = unsigned long long;
using ll = long long;
 
using namespace std;
 
int main()
{
    fast
 
    int t; cin >> t;
    while(t--){
        double n,x,y,a,b; cin>>n>>x>>y>>a>>b;

        //calcular costo viajando con coche petrol
        // 1 litro petro cuesta "x" y viaja A, y 1 litro diesel cuesta "y" y viaja b

        if(x/a < y/b){
            cout << "PETROL";
        }
        else if(x/a > y/b){
            cout << "DIESEL";
        }
        else{
            cout << "ANY";
        }
        cout << "\n";
    }
}