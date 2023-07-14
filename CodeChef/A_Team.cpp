// File Name: A_Team.cpp
// Date: 2023-07-14
// Time: 11:19:40

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;cin>>n;
    int count  = 0;

    for(int i=1;i<=n;i++)
    {
        int ans=0;
        for(int j=1;j<=3;j++)
        {
            int x;cin>>x;
            
            if(x == 1)
            {
                ans = ans + 1 ;
            }
        }

        if(ans >= 2)
        {
            count ++;
        }

        
    }
    cout<<count<<endl;

    return 0;
}
