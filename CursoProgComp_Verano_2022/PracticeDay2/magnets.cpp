//#include <bits/stdc++.h> //Incluye un buen de librerias servibles para comp
#include <iostream>

using namespace std;

int main(){

    int n;
    int output = 1;
    int magnet1;
    int magnet2;

    cin >> n;

    for(int i=0; i<n; i++){
        if(i != 0){
            cin >> magnet2;
            if(magnet1 != magnet2)
                output++;
            magnet1 = magnet2;
        }else if(i == 0){
            cin >> magnet1;
        }
    }
    
    cout << output;
}