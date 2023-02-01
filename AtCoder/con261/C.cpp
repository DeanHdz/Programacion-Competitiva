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
 
    ll n; cin >> n;
    map<string,ll> s;
    vector<string> out;

    //Input strings
    for(int i=0;i<n;i++){
        string input;
        cin >> input;
        if(s[input] != 0){
            s[input]++;
            input = input + '(' + to_string(s[input]-1) + ')';
            out.push_back(input);
            
        }
        else{
            s[input]++;
            out.push_back(input);
        }

    }

    for(auto o : out){
        cout << o << "\n";
    }
}
