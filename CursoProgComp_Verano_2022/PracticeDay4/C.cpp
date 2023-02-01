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
    
   int n,input;
   vector<int> v;

   cin >> n;
   v.resize(n);

   for(int i=0;i<n;i++){
      cin >> input;
      v[input-1] = i+1;
   }

   for(int i=0; i<n; i++){
      cout << v[i] << " ";
   }

}