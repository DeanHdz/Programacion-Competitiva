#include <iostream>
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
#define all(container) begin(container),end(container)

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int res=0;
        //Determine longitud de shift mas pequeño
        int l1,l2,l3;
        int p1,p2,p3;
        
        p1 = 2;
        p3 = n;
        
        if(n>8){
            p2 = ((n-3)/3) + 3;
            l1 = p1-1;
            l2 = p2-p1-1;
            l3 = p3-p2-1;
            res = min( abs(l1-l2) , abs(l2-l3) );
            res = min( res , abs(l3-l1) );
            //cout<<p1<<" "<<p2<<" "<<p3<<"   "<<l1<<" "<<l2<<" "<<l3<<"\n";
        }
        
        //Imprimir resultado
        cout << res << "\n";
    }
}
