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
        
        int n,s,r;
        cin >> n >> s >> r;
        
        //Solve
        
        int stolen = s-r;
        int sum=0;
        
        for(int i=0;i<n;i++){
            if(i==0){
                cout << stolen << " ";
                sum += stolen;
                }
            else
                {
                    float num = ceil((s - sum) / (n-i));
                    int dif = (int)num;
                    if(dif >= stolen)
                        dif = stolen;
                    sum += dif;
                    cout << dif << " ";
                }
        }
        cout << "\n";
        
    }
}
