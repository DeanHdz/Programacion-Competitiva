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

    vector<int> numbers;
    int n,output; cin >> n;
    bool cond;

    for(int i=0;i<n;i++){
        int input; cin >> input;
        numbers.pb(input);
    }

    if((numbers[0] % 2) != (numbers[1] % 2)){
        if( (numbers[0] % 2) != (numbers[2] % 2) )
            output = 1;
        else
            output = 2;
    }else{
        cond = numbers[0] % 2;

        int j = 2;

    while( (numbers[j] % 2) == cond && (j < numbers.size()))
    {
        j++;
    }

    if((numbers[j] % 2) != cond)
        output = j+1;
    }

    cout << output;
}