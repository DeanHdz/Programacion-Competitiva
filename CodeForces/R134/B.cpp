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
        int n,m,sx,sy,d; cin>>n>>m>>sx>>sy>>d;

        /*int rx,ry,cx,cy;

        cx = min(abs(sx-n),abs(sx-1));
        cy = min(abs(sy-m),abs(sy-1));

        cx = min(cx,d);
        cy = min(cy,d);

        rx = d+1 + cx;
        ry = d+1 + cy;

        //Checar si bloque entero bloquea el paso
        if( rx >= n || ry >= m )
        {
            cout << -1 << "\n";
        }
        //Checar si el bloque toca el final
        else if( sx+d >= n && sy+d >= m)
        {
            cout << -1 << "\n";
        }*/

        //Codigo de otro, con esto si funciono
        long long int d1=abs(sx-n)+abs(sy-m); // ni uso essto o si?
        if(sx-d<=1&&sy-d<=1||sx-d<=1&&sx+d>=n||sy+d>=m&&sy-d<=1||sx+d>=n&&sy+d>=m)
        cout<<-1;

        else
            cout << ((n-1)+(m-1)) << "\n";
    }
}

//No funciono el mio :c