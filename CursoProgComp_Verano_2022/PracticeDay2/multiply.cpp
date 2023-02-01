#include <iostream>

using namespace std;
const int N = 20001;

int main(){

    int numbers[N];
    int n,t,count,cycle,aux;
    double aux2;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;
        numbers[i] = n;
    }

    for(int i=0; i<t; i++){
        count = 0;
        cycle = 0;
        aux = 0;
        aux2 = 0;
        n = numbers[i];
        while( (n != 1) && (cycle != 4)){
            count++;
            aux  = n/6;
            aux2 = (double)n/6;
            if(aux == aux2){
                cycle = 0;
                n = n/6;
            }
            else{
                n = n*2;
                cycle++;
            }

        }
        if(cycle == 4)
            count = -1;
        cout << count << "\n";
    }

}