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

const int N = 100002;

int main()
{
    fast

    int n; cin >> n;
    ull heights[N];
    ull output=0;
    ull energy=0;
    ull height=0;

    for(int i=0; i<n; i++){
        cin >> heights[i];
    }

    for(int i=0;i<n;i++){
        if(i == 0){
            output = heights[i];
            height = heights[i];
        }else if(heights[i] <= height)
        {
            energy += height - heights[i];
            height = heights[i];
        }
        else if(heights[i] > (energy + height)){
            output += heights[i] - (height + energy);
            energy = 0;
            height = heights[i];
        }else if(heights[i] <= (energy + height))
        {
            energy -= heights[i] - height;
            height = heights[i];
        }
    }
    cout << output;
}