#include <bits/stdc++.h>

#define all(container) begin(container), end(container)
 
using namespace std;
 
int main()
{
    int count=0;
    int n,m; cin >> n >> m;
    vector<pair<int,int>> p;

    for(int i=0;i<m;i++){
        int u,v; cin >> u >> v;
        p.push_back({u,v});
    }

    sort(all(p));

    for(int i=0;i<m;i++){
        
    }

    cout << count;

}