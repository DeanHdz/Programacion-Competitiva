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
    int n;
    string input;
    set<char> stringComp;

    cin >> n >> input;

    for(int i=0; i<n; i++){
        if(input[i] >=65 && input[i] < 91)
            input[i] += 32;
        stringComp.insert(input.at(i));
    }

    if(stringComp.size() != 26)
        cout << "NO";
    else if(stringComp.size() == 26)
        cout << "YES";

}