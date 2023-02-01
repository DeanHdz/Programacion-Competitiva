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
 
    ll n; cin >> n;
    char arr[n][n];

    //input
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    }

    string res = "correct";
    bool brk = 0;

    //Verification
    for(int i=0;i<n && brk != 1;i++){
        for(int j=0;j<n;j++){
            //cout << arr[i][j] << "\n";
            if(i == j && arr[i][j] != '-'){
                res = "incorrect";
                brk = 1;
                break;
            }
            else if(arr[i][j] == arr[j][i]){
                if(arr[i][j] == 'W' || arr[i][j] == 'L'){
                res = "incorrect";
                brk = 1;
                break;
                }
            }
            else if(arr[i][j] == 'D' && arr[i][j] != arr[j][i]){
                res = "incorrect";
                brk = 1;
                break;
            }
        }
    }

    cout << res;
}
