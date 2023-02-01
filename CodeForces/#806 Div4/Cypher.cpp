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

const int N = 101;
 
int main()
{
    fast
 
    int t; cin>>t; //num testcases
    vector<string> out; //vector to print
    while(t--){
        string res = "";
        int n;cin>>n;

        int arr[N];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        for(int i=0;i<n;i++){
            int aux;
            int Uc=0,Dc=0;
            int nu; cin >> nu;
            string s; cin >> s;

            for(int j=0;j<nu;j++){
                if(s[j] == 'U')
                    Uc++;
                else if(s[j] == 'D')
                    Dc++;
            }

            aux = (abs(Uc - Dc)) % 10;
                if(Uc >= Dc){
                if(arr[i] - aux < 0)
                    aux = arr[i] - aux + 10;
                else
                    aux = arr[i] - aux;
                //aux = abs((arr[i] - (aux*11)) % 10);
                }
                else{
                if(aux + arr[i] > 9)
                    aux = aux + arr[i] - 10;
                else
                    aux = aux + arr[i];
                //aux = (arr[i] + aux) % 10;
                }

            res.append(to_string(aux));
            if(i != n-1)
                res.append(" ");
        }

        out.push_back(res);
    }

    for(auto o : out){
    cout<<o<<"\n";
    }
}
