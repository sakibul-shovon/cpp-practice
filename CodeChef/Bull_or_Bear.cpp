// File Name: Bull_or_Bear.cpp
// Date: 2023-07-13
// Time: 12:03:53

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a>b) cout<<"LOSS"<<endl;
        else if(b>a) cout<<"PROFIT"<<endl;
        else cout<<"NEUTRAL"<<endl;
    }
    return 0;
}
