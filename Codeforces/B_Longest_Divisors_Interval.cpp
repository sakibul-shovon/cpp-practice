// File Name: B_Longest_Divisors_Interval.cpp
// Date: 2023-11-30
// Time: 01:49:53

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    ll t;cin>>t;

    while(t--){
        ll n;cin>>n;

        ll count = 0;

        for(ll i=1;i<=n;i++){
            if(n % i !=  0){
               
                break;
            }
            else{
                count++;
            }
        }

         cout<<count<<endl;

       
    }
    
    return 0;
}
