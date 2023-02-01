#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ull = unsigned long long;

#define all(container) being(container),end(container)

using namespace std;

int main()
{
   int t; cin >> t;
   while(t--){
       string in; cin >> in;
       int a = (int)in[0]-48;
       int b = (int)in[2]-48;
       int sum = a+b;
       cout << sum << "\n";
   }
}
