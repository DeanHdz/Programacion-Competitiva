#include <iostream>

using namespace std;
const int N = 1001;

int main(){

    int n;
    int cardValue;
    int cards[N];
    int turn=1;
    int Sscore=0;
    int Dscore=0;
    int bottom=0;
    int top;

    cin >> n;
    top = n-1;

    for(int i=0; i<n; i++){
        cin >> cardValue;
        cards[i] = cardValue;
    }

    for(int i=0; i<n; i++){
        if(turn%2 == 1){
            //Sereja's turn
            if(cards[top] > cards[bottom]){
                Sscore += cards[top];
                top--;
            }else{
                Sscore += cards[bottom];
                bottom++;
            }
        turn++;
        }else{
            //Dima's turn
             if(cards[top] > cards[bottom]){
                Dscore += cards[top];
                top--;
            }else{
                Dscore += cards[bottom];
                bottom++;
            }
        turn++;
        }
    }

    cout << Sscore << ' ' << Dscore;

}