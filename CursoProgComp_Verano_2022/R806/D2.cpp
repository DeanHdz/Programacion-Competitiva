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
 
    int t;cin>>t;
    vector<string> out;
    while(t--){

        int n; cin >> n;
        vector<string> s;
        vector<string> comb;
        string res = "";
        bool cond;

        for(int i=0;i<n;i++){
            string input; cin >> input;
            s.push_back(input);
        }

        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                comb.push_back( (s[j]+s[k]) );
            }
        }

        for(int i=0;i<n;i++){
            cond = 0;
            for(int j=0;j<comb.size();j++){
                if(s[i] == comb[j])
                {
                    cond = 1;
                    break;
                }
            }
            res.append(to_string(cond)); //Agregar resultado de caso a res
        }

        out.push_back(res); //Entregar resultado a output
    }
    for(auto o : out){
        cout<<o<<"\n";
    }
}


/*for(int i=0;i<n;i++){
            cond = 0;
            for(int j=0; j<n && cond == 0;j++){
                if(i != j) //Verificar que no sea una comparacion entre la misma cadena
                {
                    for(int k=0; k<n && cond == 0;k++){
                        if( i != k){
                            if(s[i] == (s[j]+s[k]))
                            {
                                cond = 1;
                                break;
                            }
                        }
                    }
                }
            }
            res.append(to_string(cond)); //Agregar resultado de caso a res
        }*/