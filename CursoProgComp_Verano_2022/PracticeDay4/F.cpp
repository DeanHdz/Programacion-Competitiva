#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <map>

#define all(container) begin(container), end(container)

using namespace std;

const int N = 300;

int main()
{
    
    int n;
    bool signal=1;

    char paper[N][N];
    char letter,letter2;
    
    cin >> n;

    //Prepare paper
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cin >> paper[i][j];
        }
    }

    letter = paper[0][0];
    letter2 = paper[0][1];

    if(letter == letter2)
        signal = 0;

    //Verify
    for(int i=0; i<n && signal; i++){
        if((paper[i][i] != letter) || (paper[i][n-i-1] != letter))
            signal = 0;
    }

    for(int i = 0; i<n && signal; i++){
        for(int j=0; j<n && signal; j++){
            if(paper[i][j] != letter2 && ( (i != j) && (j != (n-i-1)) ) )
            {
                //cout << "Se ha desactivado en: " << i << " " << j;
                signal = 0;
            }
        }
    }

    if(signal)
        cout << "YES";
    else
        cout << "NO";

}