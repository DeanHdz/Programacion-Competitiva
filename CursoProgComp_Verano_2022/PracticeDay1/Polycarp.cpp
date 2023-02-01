#include <iostream>
#include <string>

using namespace std;
const int T = 5001;
const int b = 8;
const int a = 4;


int main(){

    long unsigned int table[T][b];
    long unsigned int result[T][a];

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        for(int j=0; j<7; j++){
            cin >> table[i][j];
        }
        if((table[i][3] + table[i][2] + table[i][0]) == table[i][6]){
            result[i][0] = table[i][0];
            result[i][1] = table[i][2];
            result[i][2] = table[i][3];
        }else if((table[i][2] + table[i][1] + table[i][0]) == table[i][6]){
            result[i][0] = table[i][0];
            result[i][1] = table[i][1];
            result[i][2] = table[i][2];
        }else if((table[i][3] + table[i][2] + table[i][1]) == table[i][6]){
            result[i][0] = table[i][3];
            result[i][1] = table[i][1];
            result[i][2] = table[i][2];
        }else if((table[i][0] + table[i][3] + table[i][1]) == table[i][6]){
            result[i][0] = table[i][3];
            result[i][1] = table[i][1];
            result[i][2] = table[i][0];
        }
    }

    for(int i=0; i<t; i++){
        for(int j=0; j<3; j++){
            cout << result[i][j];
            if(j != 2)
                cout << " ";
        }
        cout << "\n";
    }
}