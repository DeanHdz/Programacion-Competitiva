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

const int N = 1001;

int main()
{
    fast

    int n; cin >> n;
    int arr[N];
    int max=0;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        int l=i,r=i;
        int count=1;
        while(l != 0)
        {
            if(arr[l-1] <= arr[l])
            {
                count++;
                l--;
            }else
                break;
        }
        while(r < (n-1)){
            if(arr[r+1] <= arr[r])
            {
                count++;
                r++;
            }else
                break;
        }
        if(count > max)
            max = count;
    }

    cout << max;
}
