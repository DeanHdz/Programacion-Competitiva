//NO FUNCIONA, falta corregir como acomodar los diagonales y sumar

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>
// include <bits/stdc++.h>

// CONVENIENCE
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
#define all(container) begin(container), end(container)
#define F first
#define S second
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using ull = unsigned long long;
using ll = long long;

using namespace std;

int main()
{
    fast

    int t; cin >> t;
    vector<int> output;
    while(t--){
        int n,m; cin >> n >> m;
        map<int,int> diagonal; //(va a haber n + m - 1 diagonales, menos  1 porque en [0][0] solo se debe contar uno)
        map<int,int> diagonal2; //(va a haber n + m - 1 diagonales, menos  1 porque en [n][m] solo se debe contar uno)
        //int arr[n][m];
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int input; cin >> input;
                //arr[i][j] = input;
                if(i != j){
                diagonal[i+j] += input;
                diagonal2[(n+m-1) - i - j] += input;
                }
                else {
                diagonal[i] += input;
                diagonal2[(n+m-1) - i] += input;
                }
            }
        }
        //Calcular res
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i != j){
                    cout << diagonal[i+j] + diagonal2[(n+m-1)-i-j] << "\n";
                if(diagonal[i+j] + diagonal2[(n+m-1)-i-j] > res)
                    res = diagonal[i+j] + diagonal2[(n+m-1)-i-j];

                }
                else{
                cout << diagonal[i] + diagonal2[(n+m-1)-i] << "\n";
                if(diagonal[i] + diagonal2[(n+m-1)-i] > res)
                    res = diagonal[i] + diagonal2[(n+m-1)-i];
                }
            }
        }

        output.push_back(res);
    }
    for(auto o : output){
        cout << o << "\n";
    }
}

/*

cin.clear();
                int sum=0;
                int Y1,Y2,aux=0;
                Y1 = j - i;
                Y2 = j + i;
                cout << "\n";
                while(Y1 != n || Y1 != m){
                    cout << arr[Y1][aux] << " ";
                    sum += arr[Y1][aux];
                    Y1++;
                    aux++;
                }
                cout << "\n";
                aux=n-Y1;
                if(Y1 != Y2){
                while(Y2 != 0 || Y2 != m){
                    cout << arr[Y2][aux] << " ";
                    sum += arr[Y2][aux];
                    Y2--;
                    aux--;
                    }
                }


*/

/*

int sum=0;

                for(int k = j - i; k<n && k<m ;k++){
                    sum += arr[k][k];
                }
                if(j+i != j-i)
                for(int k = j+i ; k>=0 && k<m;k--){
                    sum += arr[k][k];
                }

                cout << "sum is: " << sum << "\n";
                
                if(sum > res)
                    res = sum;

*/