#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int b;
    int d;
    int orange;
    int container=0;
    int times=0;


    cin >> n;
    cin >> b;
    cin >> d;

    for(int i=0; i<n; i++){
        cin >> orange;
        if(orange <= b){
            container += orange;
            if(container > d){
                container = 0;
                times++;
            }
        }
    }
    cout << times;
}