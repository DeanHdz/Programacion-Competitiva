#include <iostream>
#include <bits/stdc++.h>

#define all(container) begin(container),end(container)
#define N 50002

using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{

    int t; cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        
        int unMayus = 0;
        bool t,i,m,u,r;
        t = 0;
        i = 0;
        m = 0;
        u = 0;
        r = 0;
        
        if(n != 5)
            cout << "NO" << "\n";
        else
        {
            for(int j=0;j<n;j++){
                //cout << s[j] << (int)s[j] << "\n";
                if( s[j] >= 65 && s[j] <= 90 && unMayus == 0)
                    {unMayus = 1;}
                else if(s[j] >= 65 && s[j] <= 90 && unMayus == 1)
                    {unMayus = -1;}
            }
            
            if(unMayus != 1)
                cout << "NO" << "\n";
            else
            {
                for(int j=0; j<n; j++)
                {
                    if(s[j] == 'T')
                        t = 1;
                    if(s[j] == 'i')
                        i = 1;
                    if(s[j] == 'm')
                        m = 1;
                    if(s[j] == 'u')
                        u = 1;
                    if(s[j] == 'r')
                        r = 1;
                }
                
                if(t == 1 && i ==1 && m==1 && u==1 && r==1)
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
        }
    }
    return 0;
}

//{}