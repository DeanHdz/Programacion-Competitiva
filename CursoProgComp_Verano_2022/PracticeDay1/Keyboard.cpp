#include <iostream>
#include <string>

using namespace std;

int main(){

    string one   = "qwertyuiop";
    string two   = "asdfghjkl;";
    string three = "zxcvbnm,./";

    char direction;
    string sequence;
    string result;
    int position;

    cin >> direction;
    cin >> sequence;

    for(int i = 0; i < sequence.size(); i++){
        if(one.find(sequence.at(i)) < 10)
        {position = one.find(sequence.at(i));

            if(direction == 'R')
                result.push_back(one.at(position-1));
            else if(direction == 'L')
                result.push_back(one.at(position+1));

        }else{
            if(two.find(sequence.at(i)) < 10){
            position = two.find(sequence.at(i));

            if(direction == 'R')
                result.push_back(two.at(position-1));
            else if(direction == 'L')
                result.push_back(two.at(position+1));

            }
            else{
            if(three.find(sequence.at(i)) < 10){
            position = three.find(sequence.at(i));

            if(direction == 'R')
                result.push_back(three.at(position-1));
            else if(direction == 'L')
                result.push_back(three.at(position+1));
            }
            }
        }
    }

cout << result;

}