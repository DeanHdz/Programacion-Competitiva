#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{

    string s;
    cin >> s;
    int u=0,l=0;

    for(int i=0; i<s.length(); i++){

        if(s[i] >= 65 && s[i]<= 90)
            u++;
        else{
            l++;
        }
    }

    if(l >= u){
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
    }

    cout << s;

}