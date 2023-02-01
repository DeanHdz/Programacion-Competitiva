#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    
    int count=0;
    unsigned long long n;
    string N;
    cin >> N;

    while(N.size() > 1){
        count++;
        n=0;
        for(int i=0; i<N.size(); i++){
            n += N[i] - 48;
        }
        N = to_string(n);
    }

    /*while(!(n < 10 && n >= 0))
    {
        count++;
        N = to_string(n);
        n = 0;
        for(unsigned long long int i=0; i<N.size(); i++){
            n += N[i] - 48;
        }
    }*/
    
    cout << count << "\n";

}