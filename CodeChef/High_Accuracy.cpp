// File Name: High_Accuracy.cpp
// Date: 2023-07-14
// Time: 23:43:26

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--)
    {
        int n,count = 0;
        cin>>n;
        
        if(n%3 == 0 ) cout<<0<<endl;

        else{
            while(1)
            {
                n = n+1;
                if(n%3 == 0)
                {
                    count++;
                    break;
                }
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
