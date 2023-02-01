#include <iostream>
#include <bits/stdc++.h>

#define all(container) begin(container),end(container)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
    //Testcases
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string o = "";
        
        int i=0;
        while(i<n){
            if(s[i] == '1' || s[i] == '2'){
                if(i+2 < n){
                    
                    if(s[i+2] == '0'){
                        //o.append(1, char( 96 + ( (int)s[i] - 48)*10 + ( (int)s[i+1] - 48) ) );
                        //i+=3;
                        if(i+3 < n){
                            if(s[i+3] == '0'){
                                o.append(1,char( 48+(int)s[i]) );
                                i++;
                            }else{
                            o.append(1, char( 96 + ( (int)s[i] - 48)*10 + ( (int)s[i+1] - 48) ) );
                            i+=3;
                            }
                            
                        }
                        else{
                            o.append(1, char( 96 + ( (int)s[i] - 48)*10 + ( (int)s[i+1] - 48) ) );
                            i+=3;
                        }
                            
                    }
                    
                    else
                    {
                    o.append(1,char( 48+(int)s[i]) );
                    i++;
                    }
                    
                }
                else{
                o.append(1, char( 48+(int)s[i]) );
                i++;
                }
            }
            else{
                o.append(1, char( 48+(int)s[i]) );
                i++;
            }
        }
        cout << o << "\n";
    }
}