#include <iostream>

using namespace std;
const int N = 50001;

int main(){

    int result[N];

    int max;
    int aux;
    
    int t;
    int x,y,n;
    cin >> t;

    //Recibir 3 enteros de cada caso
    for(int i=0; i<t; i++){
        cin >> x;
        cin >> y;
        cin >> n;

        //Calcular resultados
        max=0;

        aux = n / x;
        aux = aux * x;
        if(aux + y <= n)
            max = aux + y;
        else if(aux - x + y < n){
            max = aux - x + y;
        }

        result[i] = max;
    }

    //Entregar resultados
    for(int i=0; i<t; i++){
        cout << result[i] << "\n";
    }

}