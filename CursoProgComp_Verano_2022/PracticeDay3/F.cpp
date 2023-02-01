#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int input,n,count=0;
    vector<int> host,guest; 

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> input;
        host.push_back(input);
        cin >> input;
        guest.push_back(input);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //cout << host[i] << " " << guest[j] << "\n";
            if(host[i] == guest[j])
                count++;
        }
    }
    
    cout << count;

}