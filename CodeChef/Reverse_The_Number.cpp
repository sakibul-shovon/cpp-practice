// File Name: Reverse_The_Number.cpp
// Date: 2023-07-15
// Time: 00:49:31

#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    
    while(t--)
    {
        int n,ans=1;
        cin>>n;
        int rev = 0;

        while(n!=0)
        {
            rev = n % 10 + rev *  10;
            n/=10;
        }
        cout<<rev<<endl;
    }
    return 0;
}
