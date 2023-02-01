#include <iostream>
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

#define all(container) begin(container),end(container)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        
        //Input
        
        string pi = "314159265358979323846264338327";
        string n; cin >> n;
        
        //Solve
        
        int count=0;
        
        for(int i=0;i<pi.length();i++){
            if(n[i] == pi[i])
                count++;
            else
                break;
        }
        
        cout << count << "\n";
    }
}
