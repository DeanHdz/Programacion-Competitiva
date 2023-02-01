#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>
//include <bits/stdc++.h>

// CONVENIENCE

#define all(container) begin(container), end(container)
#define F first
#define S second
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long, long long>
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define fc(i,n) for(int i=0;i<n;i++) 

using ull = unsigned long long;
using ll = long long;

using namespace std;

int main()
{

fast

    ull n,m,a,output,s;

    cin >> n >> m >> a;

    s = n % a;
    if(s){
       n = n - s + a;
    }
    s = m % a;
    if(s){
        m = m - s + a;
    }

    output = (n*m) / (a*a);

    cout << output;
}