#include <bits/stdc++.h> //Incluye un buen de librerias servibles para comp

#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    string b;

    cin >> a;
    cin.ignore();
    getline(cin,b); //Rescata toda la linea con todo y espacios

    cout << a << '\n';
    cout << b << '\n';

    return 0;
}