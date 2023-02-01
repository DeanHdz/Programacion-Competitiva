#include <iostream>

using namespace std;
const int N = 102;

int main(){

    int n,m;
    int a[N];
    int x,y;

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    cin >> m;

    for(int i=0; i<m; i++){
        cin >> x;
        cin >> y;
        a[x-1] += (y - 1);
        a[x+1] += (a[x] - y);
        a[x] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << "\n";
    }

}