//Incompleto, https://codeforces.com/problemset/problem/1660/C

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
    vector<int> out;
    while(t--){
    string s; cin>>s;

    //Implementacion
    int OL = s.length();
    int i=1,count=0;
    while(i < OL){
        if(s[i] != s[i+1]){
        count++;
        //auto pos = ;
        //s.erase(pos,1);
        i++;
    }
    else 
        i+=2;
    }
    out.push_back(count);
    }
    for(auto o : out){
        cout << o << "\n";
    }
}
