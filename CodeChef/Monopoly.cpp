// File Name: Monopoly.cpp
// Date: 2023-07-14
// Time: 19:45:32

#include <bits/stdc++.h>
using namespace std;

bool check(int a,int b,int c,int d)
{
    if(b+c+d < a)
    {
        return true;
    }
}
int main(){
    
    int t;cin>>t;
    
    while(t--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;

        if(a>(b+c+d) || b>(a+c+d) || c>(a+b+d) || d>(a+b+c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
