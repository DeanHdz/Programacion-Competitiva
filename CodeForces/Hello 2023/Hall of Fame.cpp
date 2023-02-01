#include <iostream>
#include <bits/stdc++.h>

#define all(container) begin(container),end(container)

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int li=-1;
        int ri=n+2;
        
        int i=0;
        while(i != n){
            if(s[i] == 'R'){
                ri=i;
                break;
            }
            i++;
        }
        
        i=n-1;
        while(i != -1){
            if(s[i] == 'L'){
                li=i;
                break;
            }
            i--;
        }
        
        if(ri < li){
            cout << "0\n";
        }
        else if(li != -1 && ri != n+2){
            int k;
            for(k=0; k<n-1; k++){
                    int l;
                    int r;
                    
                    if(k == ri || k+1 == ri)
                    {
                        if(k == ri)
                            r=ri+1;
                        else
                            r=ri-1;
                    }
                    else
                        r=ri;
                    
                    if(k == li || k+1 == li)
                    {
                        if(k == li)
                            l=li+1;
                        else
                            l=li-1;
                    }
                    else
                        l=li;
                    
                
                    if(r < l){
                        cout << k+1 << "\n";
                        break;
                    }
                    
            }
            if(k == n-1)
                cout << "-1\n";
        }
        else
            cout << "-1\n";
            
    }
}