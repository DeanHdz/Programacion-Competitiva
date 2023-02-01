#include <iostream>

using namespace std;

int main(){
    int n;
    bool input;
    int count;
    int result = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        count = 0;
        for(int j=0; j<3; j++){
            cin >> input;
            count += input;
        }
        if(count >= 2)
           result++;
    }

    cout << result;
}