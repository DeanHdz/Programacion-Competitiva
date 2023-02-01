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
    //fast

    string s1,s2; 
    cin >> s1;
    cin >> s2;

    int i=0;
    int j=0;

    while((i != s1.size()-1) && (j != s2.size())){
        //cout << "Actual: " << s1[i] << s2[j] << "\n";
        while( (s2[j] != s1[i]) && (j != s2.size())){
            //cout << "Comparando: " << s1[i] << s2[j] << "\n";
            j++;
        }
        if(s1[i] == s2[j]){
            //cout << "Igualado: " << s1[i] << s2[j] << "\n";
            i++;
            j++;
        }
    }
    cout << i+1;

}
