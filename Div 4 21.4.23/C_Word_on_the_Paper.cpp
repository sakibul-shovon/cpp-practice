// File Name: C_Word_on_the_Paper.cpp
// Date: 2023-07-21
// Time: 20:55:18

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                char a;
                cin>>a;
                if(a!='.')
                {
                    cout<<a;
                }
            }

        }
        cout<<endl;
    }
    return 0;
}
