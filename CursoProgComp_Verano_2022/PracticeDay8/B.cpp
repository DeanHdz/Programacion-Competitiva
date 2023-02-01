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

    int arr[5][5];
    int count = 0;
    int oneX,oneY;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
        {
            int input; cin >> input;
            arr[i][j] = input;
            if(input == 1){
                oneX = i;
                oneY = j;
            }
        }
    }

    count = abs(2 - oneX) + abs(2 - oneY);
    cout << count;
}

