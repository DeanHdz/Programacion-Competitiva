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
#define fc(i, n) for (int i = 0; i < n; i++)

using ull = unsigned long long;
using ll = long long;

using namespace std;

int main()
{

    int i=0;
    string input; cin >> input;

    while(i != input.size())
    {
        //cout << input[i] << "\n";
        if(input[i] >= 65 && input[i] <= 90)
            input[i] += 32;
        if(input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'u' || input[i] == 'i'){
            input.erase(i,1);
        }else{
            input.insert(i,1,'.');
            i += 2;
        }
        //cout << input << "\n";
    }

    cout << input;
}