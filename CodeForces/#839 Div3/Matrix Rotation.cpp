#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ull = unsigned long long;

#define all(container) begin(container),end(container)

using namespace std;

int main()
{
   int t; cin >> t;
   while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
           int in; cin >> in;
           arr[i] = in;
        }
        
        int r1=0, r2=0, r3=0, r4=0;
        
        //r1
        if(arr[0] < arr[1])
            r1++;
        if(arr[0] < arr[2])
            r1++;
        if(arr[2] < arr[3])
            r1++;
        if(arr[1] < arr[3])
            r1++;
        //r2
        if(arr[2] < arr[0])
            r2++;
        if(arr[2] < arr[3])
            r2++;
        if(arr[3] < arr[1])
            r2++;
        if(arr[0] < arr[1])
            r2++;
        //r3
        if(arr[3] < arr[2])
            r3++;
        if(arr[3] < arr[1])
            r3++;
        if(arr[1] < arr[0])
            r3++;
        if(arr[2] < arr[0])
            r3++;
        //r4
        if(arr[1] < arr[3])
            r4++;
        if(arr[1] < arr[0])
            r4++;
        if(arr[0] < arr[2])
            r4++;
        if(arr[3] < arr[2])
            r4++;
            
            
        if(r1 == 4 || r2 == 4 || r3 == 4 || r4 == 4)
            cout << "YES";
        else
            cout << "NO";
            
        cout << "\n";
   }
}
