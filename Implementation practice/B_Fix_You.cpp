// File Name: B_Fix_You.cpp
// Date: 2023-07-02
// Time: 01:15:55

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m,count = 0;
        cin>>n>>m;
        string s[n];
        

        for(int i=0;i<n;i++) cin>>s[i];
            
        

        for(int i=0;i<n-1;i++)
        {
            if(s[i][m-1]!='D') count++;
        }

        for(int i=0;i<m-1;i++)
        {
            if(s[n-1][i] != 'R') count++;
        }

        cout<<count<<endl;
    }

    return 0;
}
