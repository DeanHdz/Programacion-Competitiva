#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <iterator>
#include <math.h>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    long long int n,k,result;

    cin >> n >> k;

    int extra = n % 2;

    if(extra){

        if(k > (n/2 + extra))
            result = (k - n/2) * 2 - 2;
        else
            result = 2*k-1;
    }
    else{

        if(k > n/2)
            result = (k - n/2) * 2;
        else
            result = 2*k-1;
    }


    cout << result;

}