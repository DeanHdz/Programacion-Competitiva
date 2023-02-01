//#include <bits/stdc++.h> //Incluye un buen de librerias servibles para comp
#include <iostream>

using namespace std;

int main(){

    int n;
    int h;
    int person;
    int width=0;

    cin >> n;
    cin >> h;

    for(int i=0; i<n; i++){
        cin >> person;
        if(person  <= h)
            width++;
        else
            width += 2;
    }

    cout << width;
    
}