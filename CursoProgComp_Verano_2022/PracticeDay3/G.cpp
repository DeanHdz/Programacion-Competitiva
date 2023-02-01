#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define all(container) begin(container), end(container)

using namespace std;

int main()
{
    int n,input,w;
    int m=0,s=0,p=0;
    vector<int> children,comp;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> input;
        if(input == 1)
            p++;
        if(input == 2)
            m++;
        if(input == 3)
            s++;
        children.push_back(input);
    }
    comp.push_back(m);
    comp.push_back(s);
    comp.push_back(p);

    sort(all(comp));

    w = comp[0];

    cout << w << "\n";

    if(w != 0){
        int i1=0,i2=0,i3=0;
        vector<int> moves = children;
        for(int i=0; i<w; i++){
            //Falta imprimir los trios de equipo
            while(moves[i1] != 1){
                i1++;
            }
            while(moves[i2] != 2){
                i2++;
            }
            while(moves[i3] != 3){
                i3++;
            }

            cout << i1+1 << " " << i2+1 << " " << i3+1 << "\n";
            i1++;
            i2++;
            i3++;
        }
    }


}