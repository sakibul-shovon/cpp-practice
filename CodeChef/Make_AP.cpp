// File Name: Make_AP.cpp
// Date: 2023-07-14
// Time: 19:33:45

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;
    
    while(t--)
    {
        int a,c;cin>>a>>c;
        bool check = false;
        int ans;
        for(int i = a;i<=c;i++)
        {
            if(i-a == c-i)
            {
                ans = i;
                check = true;
            }
        }

        if(check == false)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
