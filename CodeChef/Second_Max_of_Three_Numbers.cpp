// File Name: Second_Max_of_Three_Numbers.cpp
// Date: 2023-07-13
// Time: 11:44:39

#include <bits/stdc++.h>
using namespace std;

int check2ndLargest(int x,int y,int z)
{
    if(x>=y && x<=z || x>=z && x<=y) return 1;
    else return 0;
}
int main(){
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(check2ndLargest(a,b,c)) {
        cout<<a<<endl;
        }
        else if (check2ndLargest(b,a,c))
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
