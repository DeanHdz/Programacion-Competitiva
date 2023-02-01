/*#include <iostream>
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

    string c1,c2,c3;
    char high,mid,low;
    string cond = "";
    cin >> c1 >> c2 >> c3;
    //Primera comparacion
    if(c1[1] == '>'){
        high = c1[0];
        low = c1[2];
    }
    else{
        low = c1[0];
        high = c1[2];
    }
    //Segunda comparacion
    if(c2[1] == '>'){
        if(c2[0] == high)
        {
            //vacio
            cond = "Highest";
        }else if(c2[0] == low){
            mid = low;
            low = c2[2];
        }else if(c2[2] == high){
            mid = high;
            high = c2[0];
        }else if(c2[2] == low){
            //vacio
            cond = "Lowest";
        }
    }else{
        if(c2[0] == high){
            mid = high;
            high = c2[2];
        }else if(c2[0] == low){
            //vacio 
            cond = "Lowest";
        }else if(c2[2] == high){
            //vacio 
            cond = "Highest";
        }else if(c2[2] == low){
            mid = low;
            low = c2[0];
        }

    }
    //Tercera comparacion
    if(c3[1] == '>'){
        //No hay lugar para imposibles
        if(cond != ""){
            if(cond == "Highest"){
                cout << cond << c3[0] << c3[2];
            }else if(cond == "Lowest"){
                cout << c3[0] << c3[2] << cond;
            }
        }else{
            if(c3[0] == mid){
                if(c3[2] == high)
                    cout << "Impossible";
                else{
                    low = c3[2];
                    cout << high << mid << low;
                }
            }else // mid is higher
            {
                if(c3[0] == low)
                    cout << "Impossible";
                else{
                    
                    cout << high << mid << low;
                }
            }

        }
        
    }else{
        //No pueden suceder imposibles
        if(cond != ""){
            if(cond == "Highest"){
                cout << cond << c3[2] << c3[0];
            }else if(cond == "Lowest"){
                cout << c3[2] << c3[0] << cond;
            }
        }else{
            if(c3[0] == mid){
                if(c3[2] == low)
                    cout << "Impossible";
                else{
                    cout << high << mid << low;
                }
            }else // mid is higher
            {
                if(c3[2] == low)
                    cout << "Impossible";
                else{
                    cout << high << mid << low;
                }
            }
        }
    }
}*/


#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	string arr[3]={};
	for(int i=0;i<3;i++){
		
	cin>>arr[i];
	}
	
	map<char,int> ma;
	ma['A']=0;
	ma['B']=0;
	ma['C']=0;
	for(int i=0;i<3;i++)
	 if(arr[i][1]=='>'){
	 	++ma[arr[i][0]];
	 	--ma[arr[i][2]];
	 }else {
	 	--ma[arr[i][0]];
	 	++ma[arr[i][2]];

	 }
	 //cout << ma['A'] << " " << ma['B'] << " " <<ma['C'] << endl;
	 
	 
	  if(ma['A']>ma['B']&&ma['B']>ma['C'])
	  cout<<"CBA";
	  else if (ma['A']>ma['C']&&ma['C']>ma['B'])
	  cout<<"BCA";
	  else if(ma['B']>ma['C']&&ma['C']>ma['A'])
	  cout<<"ACB";
	  else if(ma['B']>ma['A']&&ma['A']>ma['C'])
	  cout<<"CAB";
	  else if(ma['C']>ma['B']&&ma['B']>ma['A'])
	  cout<<"ABC";
	  else if(ma['C']>ma['A']&&ma['A']>ma['B'])
	  cout<<"BAC";
	  else
	  	cout<<"Impossible";
      
 	return 0;
}