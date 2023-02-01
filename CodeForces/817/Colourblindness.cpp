#include <iostream>
#include <bits/stdc++.h>

#define all(container) begin(container),end(container)

using ull = unsigned long long;
using ll = long long;
using namespace std;

int main ()
{

    int t; cin >> t;
    while(t--)
    {
        int n,i; cin >> n;
        string s1,s2; cin >> s1 >> s2;
        
        for(i=0;i<n;i++)
        {
            //cout << s1[i] << " " << s2[i] << "\n";
            if(s1[i] != s2[i])
            {
                if( !( (s1[i] == 'B' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'B') ) )
                    {
                        cout << "NO\n";
                        break;
                    }
            }
        }
        if(i == n)
            cout << "YES\n";
    }
}