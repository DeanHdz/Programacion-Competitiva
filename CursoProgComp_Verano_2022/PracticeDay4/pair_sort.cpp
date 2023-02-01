#include <bits/stdc++.h>

using namespace std;

#define all(container) begin(container), end(container)

using ull = unsigned long long;
using ll = long long;

int main(){

    vector<pair<int,int>> pair_vec ={ {1,2}, {1,1}, {3,4}, {5,6} };

    pair_vec.push_back({7,8});

    pair_vec[0] = {9,0};

    for(pair<int, int> p : pair_vec){
        cout << p.first << " ";
        cout << p.second << "\n";
    }

    sort(all(pair_vec));

    /*

    vector<pair<int,int>> arr;

    arr.resize(n);
    //ciclo for 
    int val;
    cin >> val;
    arr[i] = {val,i};

    */

    vector<int> arr;
    int n,k;

    cin >> n >> k;

    arr.resize(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

}

