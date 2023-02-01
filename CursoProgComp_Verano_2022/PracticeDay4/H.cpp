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
    int n,l,a;
    long double dif;
    
    vector<int> lanterns;

    cin >> n >> l;

    for(int i=0; i<n; i++){
        cin >> a;
        lanterns.push_back(a);
    }

    sort(all(lanterns));

    dif = lanterns[0];
    if(dif < l - lanterns[n-1]){
        dif = l - lanterns[n-1];
    }

    dif = dif*2;

    for(int i=0; i<n-1; i++){
        if(dif < ( ((double)lanterns[i+1] - (double)lanterns[i])))
            dif = ((double)lanterns[i+1] - (double)lanterns[i]);
    }

    cout.precision(20); // Modificar la cantidad de numero a mostrar despues del punto
    
    cout << fixed << dif / 2.0 ;

}