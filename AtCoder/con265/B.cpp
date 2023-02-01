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
 
    int n,m,t;cin>>n>>m>>t;
    vector<int> a(n);
    map<int,int> ma;

    //Tiempo para cada cuarto
    a[0] = 0;
    for(int i=1;i<n;i++)
        cin >> a[i];
    //Extra room
    for(int i=0;i<m;i++){
        int f,s;
        cin >> f >> s;
        ma[f] = s;
    }
    
    //Calculo
    int aux=0;
    for(int i=0;i<n;i++){
        //cout << "antes: " << t << "\n";
        aux = i;
        if(t <= a[i])
            break;
        //Reduce tiempo con sig cuarto
        t -= a[i];
        //cout << "reducido: " << t << "\n";
        // si existe un bonus lo toma
        t += ma[i+1];
        //cout << "aumentado: " << t << "\n";
    }

    if(aux==(n-1))
        cout << "Yes";
    else
        cout << "No";
}