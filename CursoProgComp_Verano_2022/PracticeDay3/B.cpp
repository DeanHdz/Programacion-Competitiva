#include <iostream>
#include <string>

using namespace std;

int main()
{

   int n,count=0;
   string figure;

   cin >> n;

   for(int i=0; i<n; i++){
    cin >> figure;
    if(figure == "Tetrahedron")
        count += 4;
    if(figure == "Cube")
        count += 6;
    if(figure == "Octahedron")
        count += 8;
    if(figure == "Dodecahedron")
        count += 12;
    if(figure == "Icosahedron")
        count += 20;
   }

   cout << count;
    
}