#include <iostream>
#include <string>

using namespace std;

int main(){

    char current = 'a';
    char currentR = 'a';
    char desired;
    string input;
    int output=0; //Minimum rotations to represent string

    cin >> input;
    
    for(int i=0; i<input.size(); i++){
        desired = input.at(i);
        while( (currentR != desired) && (current != desired)){
            output++;
            if(current == 122)
            {
                current = 97;
            }
            else{
                current++;
                }
            if(currentR == 97)
            {
                currentR = 122;
            }
            else{
                currentR--;
            }
        }
        current = desired;
        currentR = desired;
    }

    cout << output;
}