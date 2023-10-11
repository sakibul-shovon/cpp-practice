// File Name: A_Goals_of_Victory.cpp
// Date: 2023-10-08
// Time: 15:11:27

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;cin>>n;

        int sum = 0;
        for(int i=1;i<n;i++)
        {
            int temp;cin>>temp;
            sum = sum + temp;
        }
        cout<<(-1)*sum<<endl;
    }
    return 0;
}
