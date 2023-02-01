#include <iostream>
#include <numeric>

using namespace std;

int main()
{

    int y,w;
    int a;
    int b=6;
    int gd;

    cin >> y >> w;

    if(y > w){
        a = 7-y;
    }
    else if(w >= y)
        a = 7-w;

    gd = gcd(a,b);
    a = a/gd;
    b = b/gd;

    cout << a << "/" << b;
    
}