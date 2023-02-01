#include <iostream>

using namespace std;

int main(){
    int Limak;
    int Bob;
    int years = 0;

    cin >> Limak;
    cin >> Bob;
    
    while(Limak <= Bob){
        years++;
        Limak = Limak*3;
        Bob = Bob*2;
    }

    cout << years;
}