#include <iostream>
#include <vector>
#include <algorithm>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{

    int n,input;
    vector<int> cube;

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> input;
        cube.push_back(input);
    }

    sort(all(cube));

    for(int i=0; i<n; i++)
        cout << cube[i] << " ";

}