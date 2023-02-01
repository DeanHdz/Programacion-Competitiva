
#include <iostream>
#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using namespace std;

#define all(container) begin(container),end(container)

// Function to insert x in arr at position pos
int* insertX(int n, int res[],
            int x, int pos)
{
    int i;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n; i >= pos; i--)
        res[i] = res[i - 1];
 
    // insert x at pos
    res[pos - 1] = x;
 
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        
        //Input
        
        int n; cin >> n;
        int save[n][n-1];
        int res[n];
        vector<int> aux;
        set<int> Bigger;
        
        //Guardar inputs
        
        for(int j=0; j<n; j++)
            for(int i=0;i<n-1;i++){
                int input; cin >> input;
                save[j][i] = input;
                if(j==0){
                    res[i] = input;
                    aux.push_back(input);
                }
            }
        
        //encontrar el i faltante
        sort(all(aux));
        
        int i,faltante;
        for(i=0; i<aux.size(); i++){
            if(i+1 != aux[i]){
                faltante = i+1;
                break;
            }
        }
        if(i == aux.size())
            faltante = i+1;
            
        //Solve
        
        for(int r=1; r<n; r++){
            bool flag = false;
            for(int c=0; c<n-1; c++){
                if(flag)
                    Bigger.insert(save[r][c]);
                if(save[r][c] == faltante)
                    flag = true;
                
            }
        }
        
        //for (set<int>::iterator x = Bigger.begin(); x != Bigger.end(); x++) {
        //    int element = *x;
        //}
        
        //print
        bool f = false;
        for(int k=1; k<=n; k++){
            if( n-Bigger.size() == k){
                f = true;
                cout << faltante << " ";
            } 
            else if(f){
                cout << res[k-2] << " ";
            }
            else
                cout << res[k-1] << " ";
        }
        
        cout << "\n";
    }
}
