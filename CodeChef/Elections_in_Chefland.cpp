// File Name: Elections_in_Chefland.cpp
// Date: 2023-07-14
// Time: 11:03:20

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        int a,b;//a=man b= age
        cin>>a>>b;
        int count = 0;

        for(int i=1;i<=a;i++)
        {
            int n;
            cin>>n;
            if(n>=b)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
