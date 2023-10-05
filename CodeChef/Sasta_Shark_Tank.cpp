// File Name: Sasta_Shark_Tank.cpp
// Date: 2023-09-29
// Time: 16:05:57

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int ans1 = a * 10;
        int ans2 = b * 5;

        if(ans1 == ans2 ) cout<<"ANY"<<endl;
        else if(ans1>ans2) cout<<"FIRST"<<endl;
        else 
        cout<<"SECOND"<<endl;
    }
    return 0;
}
