#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ull = unsigned long long;

#define all(container) begin(container),end(container)

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k,n; cin >> k >> n;
        int arr[k];
        
        int biggest = 1;
        while(n > k)
        {
            if(n-biggest >= k)
            {
                n = n - biggest;
                biggest++; 
            }
            else
                break;
        }
        
        arr[0] = 1;
        for(int i = 1; i<k; i++){
            if(biggest > 1)
            {
                arr[i] = arr[i-1] + biggest;
                biggest--;
            }
            else
                arr[i] = arr[i-1] + 1;
        }
        
        for(int i=0; i<k; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
