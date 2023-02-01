//https://codeforces.com/contest/1715/problem/A

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

    int n,m,answer=0; cin >> n >> m;

    //Recorrido del rojo
    answer += (n-1) + (m-1);

    //Recorrido del azul
    if(n == 1 && m == 1)
    {}
    else if(n == 1 || m == 1)
    {answer++;}
    else{
        if(n < m)
        answer += n;
        else
        answer += m;
    }

    cout << answer << "\n";
    }
}