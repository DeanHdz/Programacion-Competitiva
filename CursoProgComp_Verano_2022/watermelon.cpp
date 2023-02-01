/*

cin.tie(nullptr)->sync_with_stdio(false);

using ll = long long;
using ull = unsigned long long;

*/

#include <iostream>

using namespace std;

int main(){
    int melonWeigth;

    cin >> melonWeigth;
    if(melonWeigth < 4){
        cout << "NO\n";
    }
    else if(melonWeigth % 2 == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}