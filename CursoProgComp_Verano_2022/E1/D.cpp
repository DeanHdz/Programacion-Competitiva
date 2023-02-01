#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    //bool stop;
    //map<int,int> coins;
    
    long int n,suma=0,min=0,total=0;
    bool stop=0;
    cin >> n;
    vector<long int> coins(n);
    
    for(int i=0; i<n; i++){
        cin >> coins[i];
        suma += coins[i];
    }

    sort(all(coins));

    //Cantidad a superar
    suma = suma/2;

    //Realizar suma de monedas mayores hasta superar la suma con ayuda de total
    for(int i = n-1; i >= 0 && stop != 1; i--){
        total += coins[i];
        min++;
        if(total > suma)
            stop = 1;
    }

    

    //int i = coins.size();
    //cout << i << "\n";

    /*for(int i = coins.size(); i > 0 && stop != 1; i--){
        while(coins[i] > 0 && stop != 1){
            coins[i]--;
            min++;
            dif = i;
            while(dif > 1 && stop != 1){

            }
        }
    }*/


    /*for(int i = coins.size(); i > 0; i--){
        if(coins[i] != 0)
        {
            if(coins[i] % 2 == 0){
                min += coins[i] / 2;
                coins.erase(i);
            }else if(coins[i] % 2 == 1){
                spare = coins
            }
        }
    }*/

    // Eliminar pares denumeros y dejar uno solo para despues calcular combinacion

    /*for(auto& x : coins){
        //cout << x.first << " " << x.second << "\n";
        min += x.second / 2;
        if(x.second % 2 == 1)
        {
            x.second = 1;
        }
        else
            x.second = 0;
    }*/

    cout << min;

}