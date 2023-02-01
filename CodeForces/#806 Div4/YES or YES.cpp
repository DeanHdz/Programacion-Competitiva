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
 
    int t; cin>>t;
    vector<string> out;
    while(t--){
        string input;
        cin>>input;
        //Implementacion
        if( (input[0] == 89 || input[0] == 121 ) && (input[1] == 69 || input[1] == 101) && (input[2] == 83 || input[2] == 115))
        {
          out.push_back("YES");
        }
        else
            out.push_back("NO");
    }
    for(auto o : out){
        cout<<o<<"\n";
    }
}
