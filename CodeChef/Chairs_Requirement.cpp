// File Name: Chairs_Requirement.cpp
// Date: 2023-07-13
// Time: 12:08:07

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int x,y;//xstudent ychair
        cin>>x>>y;

        if( x-y <= 0) cout<<0<<endl;
        else{
            cout<<x-y<<endl;
        }
    }
    return 0;
}
