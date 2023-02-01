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
        ll a,b,c; cin >> a >> b >> c;
        ll da,db;
        //calcular diferencia entre "a" a 1 
            da = a - 1;
        //calcular diferencia entre b a c a 1
        if(b > c){
            db = b-1;}
        else if(c > b){
            db = (c-b) + (c-1);}
        
        if(da == db){
            cout << "3\n";}
        else if(da < db){
            cout << "1\n";}
        else if(db < da){
            cout << "2\n";}
    }
}
