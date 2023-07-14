// File Name: Chef_and_Donation.cpp
// Date: 2023-07-13
// Time: 14:22:31

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        int a,b,max,min;
        cin>>a>>b;

        if(a>b) {
            max = a;
            min = b;
        }

        else{
            max = b;
            min = a;

        }

        int ans = max - min;
        cout<<ans<<endl;


    }
    return 0;
}
