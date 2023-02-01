#include <bits/stdc++.h>
//#include <set>

//#include <map> es un set de ints

using namespace std;

#define all(container) begin(container), end (container)

using ull = unsigned long long;

using ll = long long;

int main(){
    /*set<int> my_set;

    my_set.insert(1);
    my_set.insert(0);
    my_set.insert(2);
    my_set.insert(3);
    my_set.insert(3); //ignora las otras 2 copias
    my_set.insert(3);

    for(int val : my_set){
        cout << val << " ";
    } cout << "\n";*/

    map<int,string> my_map;

    my_map[11] = "\n";

    my_map[0] = "Hola";

    my_map[10] = "Mundo";

    my_map[5] = " ";

    my_map[10] = "mundo"; //reescribe el mundo de arriba

    for(pair<int,string> item : my_map){
        cout << item.second; //El primer entero es el que esta en los corchetes
    }

/*
    auto it = my_map.find("22");

    if(it != my_map.end()){
        pair<string,string> p = *it;

        cout << p.first;
    }
*/

    /*
    map<string,string> my_map2;

    my_ma2p["11"] = "\n";

    my_map2["0"] = "Hola";

    my_map2["10"] = "Mundo";

    my_map2["5"] = " ";

    my_map2["10"] = "mundo"; //reescribe el mundo de arriba

    //termina imprimiendo primero el del 5 porque es mayor que el uno de los demas
*/


    //my_map.insert({1,2}); es un set de enteros
    //my_map.insert({1,2});
}