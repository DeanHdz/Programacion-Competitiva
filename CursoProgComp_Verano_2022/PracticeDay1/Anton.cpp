#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string wins;
    int A=0;
    int D=0;

    cin >> n;
    cin >> wins;
    
    for(int i=0; i<n; i++){
        if(wins.at(i) == 'A')
            A++;
        else
            D++;
    }

    if(A==D){
        cout << "Friendship";
    }
    else if( A < D){
        cout << "Danik";
    }
    else if( A > D){
        cout << "Anton";
    }
}