// File Name: A_Divisibility_Problem.cpp
// Date: 2023-11-03
// Time: 11:13:45

#include <bits/stdc++.h>
using namespace std;

int main(){
    
   long long int  t;cin>>t;
   while(t--){
    long long int a,b;cin>>a>>b;
    if(a%b == 0) cout<<0<<endl;

    else{
        cout << (b * ((a/b) +1)) - a <<endl;
    }
   }
    return 0;
}
