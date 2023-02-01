#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    
    int n,k,count=0,end=0,i=1;

    cin >> n >> k;

    //will last 4 hours = 240 minutes
    // 5,10,15,20...

    k = 240 - k; //Tiempo restante

    while( (k > 0) && (end == 0) && (n > 0) ){
        if(k >= (5*i)){
            count++;
            k -= (5*i);
            n--;
        }
        else
            end = 1;
        i++;
    }

    cout << count;

}