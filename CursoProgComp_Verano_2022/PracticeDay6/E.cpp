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

    int t; cin >> t;
    vector<int> output;

    for(int i=0; i<t; i++){
        //Start test case
        int n,k; cin >> n >> k;
        vector<int> mice(k);
        //Retrieve mice positions
        for(int j=0;j<k;j++){
            cin >> mice[j];
        }
        //Start calculations
        sort(all(mice));
        int count=0, sum=0;
        //count = cantidad de ratones que pasan
        //suma = se da prioridad de turnar ratones mas cercanos, la suma indica los tantos movimientos disponibles para poder recorrer
        for(int j=k-1;j>=0;j--){
            sum += n - mice[j]; 
        if (sum >= n) 
            break; //Ya no pudo alcanzar el raton, ni los anteriores
        count++;
        }
        output.push_back(count);
    }

    for(int i=0; i<t;i++){
        cout << output[i] << "\n";
    }
}