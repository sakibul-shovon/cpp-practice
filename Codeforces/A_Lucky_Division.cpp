// File Name: A_Lucky_Division.cpp
// Date: 2023-10-31
// Time: 16:17:12

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int lucky[12] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 777};
    bool check = 1;
    for(int i=0;i<12;i++){
        if(n % lucky[i] == 0){
            cout<<"YES"<<endl;
            check = 0;
            return 0;
        }
    }

   
    cout<<"NO"<<endl;
   

    return 0;
}
