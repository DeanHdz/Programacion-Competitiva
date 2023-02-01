#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    vector<pair <int,int> > laptops;
    int n,price,quality;
    bool signal=0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> price >> quality;
        laptops.push_back({price,quality});
    }

    //n ^ 2
    /*for(int i=0; i<n && signal != 1;  i++){
        for(int j = i+1; j<n && signal != 1; j++){
            if(i != j && ( (laptops[i].first < laptops[j].first && laptops[i].second > laptops[j].second) || laptops[i].first > laptops[j].first && laptops[i].second < laptops[j].second) )
                signal = 1;
        }
    }*/

    sort(all(laptops)); // n log n

    // n ... n log n + n
    for(int i=0; i<n-1 && (signal != 1); i++){
        if(laptops[i].second > laptops[i+1].second)
            signal = 1;
    }

    if(signal)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";

}