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

#define all(container) begin(container), end(container)
#define F first
#define S second
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using ull = unsigned long long;
using ll = long long;

using namespace std;

int main()
{
    fast

    ull t;
    vector<ull> output;

    cin >> t;
    output.resize(t);

    for(int i=0;i<t;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a == 0 || b == 0)
            output[i] = 0;
        else
        {
            
            ull m = 0;
            if( (a > b) && (a>=3) && (b>=1) )
            {
            int dif = a - b;
            if(dif == 2){
                a = a - 3;
                b--;
                m = 1;
            }else if(dif >= 3){
                    int auxD = dif/2;
                    if(auxD <= b){
                        m += auxD;
                        b = b - auxD;
                        a = a - auxD*3;
                    }else{
                        m += b;
                        b = 0;
                        a = a - b*3;
                    }
                
            }
           }

           if((b > a) && (b>=3) && (a>=1)){
            int dif = b - a;
            if(dif == 2){
                m = 1;
                b = b - 3;
                a--;
            }else if(dif >= 3){
                    int auxD = dif/2;
                    if(auxD <= a){
                        m += auxD;
                        a = a - auxD;
                        b = b - auxD*3;
                    }else{
                        m += a;
                        a = 0;
                        b = b - a*3;
                    }
                }
            }
            m += min((a/2),(b/2));

            output[i] = m;
        }
    }

    for(int i=0;i<t;i++){
        cout << output[i] << "\n";
    }
}

//Succesful version after 6 entries