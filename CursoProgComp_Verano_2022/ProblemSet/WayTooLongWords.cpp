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

    vector<string> output;
    int n;

    cin >> n;

    for(int i=0; i<n; i++){
        string input;
        cin >> input;

        if(input.size() > 10)
        {
            input = input[0] + to_string(input.size() - 2) + input[input.size()-1];
        }
        output.push_back(input); //Agregar a lista de output a mostrar
    }

    for(int i=0; i<n; i++){
        cout << output[i] << "\n";
    }

}