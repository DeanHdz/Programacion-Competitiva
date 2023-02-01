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
    string s;
    set<char> S;
    int count=0,isize;

    getline(cin,s);

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            isize = S.size();
            //cout << S.size() << "\n";
            S.insert(s[i]);
            //cout << S.size() << "\n";
            if(isize != S.size())
                count++;
        }
    }

    cout << count;

}