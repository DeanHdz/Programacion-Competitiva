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

    int n,m,k; cin >> n >> m >> k;
    vector<int> applicant(n);
    vector<int> apartment(m);
    for(int i=0; i<n; i++){
        cin >> applicant[i];
    }
    for(int i=0; i<m;i++){
        cin >> apartment[i];
    }
    /*

    */
    sort(all(applicant));
    sort(all(apartment));
    auto x = applicant.begin();
    auto size = apartment.begin();
    int matches = 0;
    while(x != applicant.end() && size != apartment.end()){
        //if(*x-k >= *jt && *x+k <= *jt){
        if(*size-k <= *x && *x <= *size+k){
            ++x;
            ++size;
            matches++;
        }else if(*x < *size){
            ++x;
        }else if(*x > *size){
            ++size; //not sure if correct
        }
    }
    cout << matches << "\n";
}

//NOT TESTED