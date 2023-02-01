#include <iostream>
#include <vector>
#include <algorithm>

#define all(container) begin(container), end(container)
//#define all(container) container.begin(), container.end()

using namespace std;

bool alphabetic (const char& lhs, const char& rhs){
        return toupper(lhs) > toupper(rhs);
    }

void add_one(int& x)
{
    x++;
}

bool fun(int x){
    return x;
}

int binary_search(int left, int right, int target){

    //Solo funciona para positivos
    if(left>=right){
        return -1;
    }
    
    int middle = (left + right) / 2;
    //int middle = left + ((right-left)/2);

    int value = fun(middle);

    if(value == target)
        return middle;
    else if(value > target)
        binary_search(left,middle+1,target);
    else if(value < target)
        binary_search(middle+1,right,target);
}

int main(){

    /*vector<int> v = {3,1,5,3,7,8,0};

    sort(v.begin(),v.end());

    //sort(v.begin(),v.end(), greater<int>());
    //Ordenar de mayor a menor

    for(int i=0; i<v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << "\n";*/

    //int x=0;

    //add_one(x);

    //La variable "auto" (int,float,etc...) identifica automaticamente que tipo de variable debe representar dependiendo de lo que da de salida
    //Es lento

    //string a = "HOLA a todos";
    //sort(all(a), alphabetic);

}



void preprocessing(){
    return;
}

void solve(){
    return;
}