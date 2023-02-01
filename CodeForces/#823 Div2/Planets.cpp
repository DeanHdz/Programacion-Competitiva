#include <iostream>
#include <bits/stdc++.h>

#define all(container) begin(container),end(container)
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,c;
        cin >> n >> c;
        int highest=0;
        int count=0;
        
        map<int,int> m;
        
        for(int i=0; i<n;i++){
            int orbit;
            cin >> orbit;
            if(highest < orbit)
                highest = orbit;
            m[orbit]++;
        }
        
        for(int i=0; i<=highest;i++){
            if(m[i] <= c)
                count += m[i];
            else
                count += c;
        }
        cout << count << "\n";
    }
}