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
 
    int n; string s;
    cin >> n >> s;

    //iterator
    int l = 0, r = n-1;
    bool cond = 1;

    while(l < r)
    {

        if(s[l] != s[r]){
            if(s[r] == 'B' && r == (n-1)){
            cond = 0;
            break;
            }
            else if( (l+1) == r){
            cond = 0;
            break;
            }
            else if(s[l] == 'A' && s[r] == 'B' && s[l-1] == 'A'){
                s[l] = 'B';
                cout << s << "\n";
            }
            else if(s[l] == 'A' && s[r] == 'B' && s[r+1] == 'B'){
                s[r] == 'A';
                cout << s << "\n";
            }
            else if(s[l] == 'B' && s[r] == 'A' && s[l-1] == 'B'){
                s[r] = 'B';
                s[r-1] = 'A';
                cout << s << "\n";
            }
            else if(s[l] == 'B' && s[r] == 'A' && s[r+1] == 'A'){
                s[l] == 'A';
                s[l+1] == 'B';
                cout << s << "\n";
            }
            else{
                cond = 0;
                break;
            }
        }

        l++;
        r--;
    }

    if(cond)
        cout << "Yes" << s;
    else
        cout << "No" << s;
    
}