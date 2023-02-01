#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string table;
    int count = 0;

    cin >> n;
    cin >> table;

    if(n > 1){
        for(int i=1; i<n; i++){
            if(table.at(i) == table.at(i-1))
                count++;
        }
        cout << count;
    }else{
        cout << count;
    }
}