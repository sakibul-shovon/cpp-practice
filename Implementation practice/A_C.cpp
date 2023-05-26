// File Name: A_C.cpp
// Date: 2023-05-18
// Time: 23:50:18

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        int ans = 0;

        while(max(a,b) <= n){
            if(a<b)
                a = a+b;
            else
                b = a+b;
        ans++;

        }
        cout<<ans<<endl;
    }

     return 0;
}
