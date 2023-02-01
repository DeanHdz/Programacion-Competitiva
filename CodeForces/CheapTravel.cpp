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
 
    ull output=0,aux=0; 
    ull n,m,a,b; cin >>n>>m>>a>>b;

    if( (b/m) < a){
        output += (n/m) * b;
        if(n%m != 0)
            if( b > a)
                output += (n%m) * a;
            else
                output += b;
        //Comprobacion
        if(m>=n)
        {
            aux += b;
            if(aux < output)
                output = aux;
        }
    }else{
        output = n*a;
    }

    cout<<output;
}

//Passed after 9 attempts... git gud nub