#include <iostream>
#include <string>

using namespace std;

const int T = 10001;
const int N = 5;

int main()
{

    int t;
    int cases[T][N];

    cin >> t;
    
    for(int i=0; i<t; i++){
        cin >> cases[i][0];
        cin >> cases[i][1];
        cin >> cases[i][2];
        cin >> cases[i][3];
    } 

    for(int i=0; i<t; i++){

        int difference = 0;
        int biggest;

        if(cases[i][0] > cases[i][1]){
            if(cases[i][0] > cases[i][2]){biggest = 0;}
            else biggest = 2;
        }
        else if(cases[i][1] > cases[i][2]){
            biggest = 1;
        }
        else{
            biggest = 2;}

        if(biggest == 0){
            if(cases[i][0] > cases[i][1])
                difference += cases[i][0] - cases[i][1];
            if(cases[i][0] > cases[i][2])
                difference += cases[i][0] - cases[i][2];
        }else if(biggest == 1){
            if(cases[i][1] > cases[i][0])
                difference += cases[i][1] - cases[i][0];
            if(cases[i][1] > cases[i][2])
                difference += cases[i][1] - cases[i][2];
        }else{
            if(cases[i][2] > cases[i][0])
                difference += cases[i][2] - cases[i][0];
            if(cases[i][2] > cases[i][1])
                difference += cases[i][2] - cases[i][1];

        }

        if( cases[i][3] >= difference){
            if((cases[i][3] - difference) % 3 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    } 

}