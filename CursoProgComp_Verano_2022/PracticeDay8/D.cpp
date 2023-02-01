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
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
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

    int n; cin >> n;
    map<int,int> A,B,C;

    int e1,e2;

    for(int i=0;i<n;i++){
        int input; cin >> input;
        A[input]++;
    }
    for(int i=0;i<n-1;i++)
    {
        int input; cin >> input;
        B[input]++;
    }
    for(int i=0;i<n-2;i++){
        int input; cin >> input;
        C[input]++;
    }
    //sort(all(A));
    //sort(all(B));
    //sort(all(C));

    for(auto k : A){
        int key = k.first;
        if(B[key] != k.second){
            e1 = k.first;
            break;
        }
    }

    for(auto k : B){
        int key = k.first;
        if(C[key] != k.second){
            e2 = k.first;
            break;
        }
    }

    cout << e1 << "\n" << e2;
}