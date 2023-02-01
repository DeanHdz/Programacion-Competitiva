#include <iostream>

using namespace std;

int main(){

   int n;
   int available=0;
   int event;
   int output=0;

   cin >> n;

   for(int i=0; i<n; i++){
    cin >> event;
    if(event != -1)
        available += event;
    else if(event == -1){
        if(available >= 1)
            available--;
        else
            output++;
    }
   }

   cout << output;

}