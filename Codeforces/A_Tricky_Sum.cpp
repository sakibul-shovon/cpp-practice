// File Name: A_Tricky_Sum.cpp
// Date: 2023-12-19
// Time: 14:58:41

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    ll t;cin>>t;

    while(t--){
        ll n;cin>>n;
        ll sum =( n*(n+1)) / 2;

        ll i =1;
        while(i<=n){
            sum -= 2 * i;
            i *= 2;
        }
        cout<<sum<<endl;

         
    }
    return 0;
}
