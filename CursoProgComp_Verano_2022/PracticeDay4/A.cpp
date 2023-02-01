#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    
    string input;
    int flag=0;

    cin >> input;

    /*
    for(int i=0; i<input.size() && flag == 0; i++){
        if(input[i] >=65 && input[i] < 91)
            flag = 1;
    }
    
    if(flag == 0)
        input[0] -= 32;
    */

   if(input[0] >=97 && input[0] <= 122)
        input[0] -= 32;

    cout << input;

}