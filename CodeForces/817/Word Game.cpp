#include <iostream>
#include <bits/stdc++.h>

#define all(container) begin(container),end(container)

using ull = unsigned long long;
using ll = long long;
using namespace std;

int main ()
{

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        map<string,int> s1;
        vector<string> sk1;
        
        map<string,int> s2;
        vector<string> sk2;
        
        map<string,int> s3;
        vector<string> sk3;
        
        int p1,p2,p3;
        p1=p2=p3=0;
        
        
        for(int i=0;i<n;i++){
            string input; cin >> input;
            sk1.push_back(input);
            s1[input]++;
        }
        for(int i=0;i<n;i++){
            string input; cin >> input;
            sk2.push_back(input);
            s2[input]++;
        }
        for(int i=0;i<n;i++){
            string input; cin >> input;
            sk3.push_back(input);
            s3[input]++;
        }
        
        for(int i=0;i<n;i++){
            int c1,c2;
            //Calcular del 1
            c1=c2=0;
            if( s2[sk1[i]] > 0)
                c1=1;
            if( s3[sk1[i]] > 0)
                c2=1;
            if(c1 == 0 && c2 == 0)
                p1 += 3;
            else if(c1 != c2)
                p1 += 1;
                
            //Calcular del 2
            c1=c2=0;
            if( s1[sk2[i]] > 0)
                c1=1;
            if( s3[sk2[i]] > 0)
                c2=1;
            if(c1 == 0 && c2 == 0)
                p2 += 3;
            else if(c1 != c2)
                p2 += 1;
                
            //Calcular del 3  
            c1=c2=0;
            if( s1[sk3[i]] > 0)
                c1=1;
            if( s2[sk3[i]] > 0)
                c2=1;
            if(c1 == 0 && c2 == 0)
                p3 += 3;
            else if(c1 != c2)
                p3 += 1;
                
        }
        cout << p1 << " " << p2 << " " << p3 << "\n";
    }
}