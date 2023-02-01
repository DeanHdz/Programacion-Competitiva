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
 
    int t; cin>>t;
    while(t--){
        /*
        case 1 all same (0)
        case 2 one different (1)
        case 2 2 same 2 different (2)
        case 3 2 same 2 same
        case 4 all diferent (3)
        */ 
        char arr[4]; cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int lowest=3;

        for(int i=0;i<4;i++)
        {
            int count=0;
            for(int j=0;j<4;j++)
                {
                    if(i!=j && arr[j] != arr[i]){
                        count++;
                    }
                }
            if(count < lowest)
                lowest = count;
        }
    //consideration of case 3
    if( (arr[0] == arr[1] && arr[2] == arr[3]) && !((arr[0] == arr[2] && arr[1] == arr[3]) || ( arr[0] == arr[3] && arr[1] == arr[2])) )
        cout << 1 << "\n";
    else if( (arr[0] == arr[2] && arr[1] == arr[3]) && !((arr[0] == arr[1] && arr[2] == arr[3]) || ( arr[0] == arr[3] && arr[1] == arr[2])) )
        cout << 1 << "\n";
    else if( ( arr[0] == arr[3] && arr[1] == arr[2]) && !((arr[0] == arr[1] && arr[2] == arr[3]) || (arr[0] == arr[2] && arr[1] == arr[3])) )
        cout << 1 << "\n";
    //else consideration of rest of cases
    else
        cout << lowest << "\n";
    }
}

//Passed