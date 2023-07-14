// File Name: Monopoly.cpp
// Date: 2023-07-14
// Time: 19:45:32

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;
    
    while(t--)
    {
        int arr[4]; 
        for(int i=1;i<=4;i++) cin>>arr[i];

        for(int i=1;i<=4;i++)
        {
           bool check = checkfun(arr[i],arr[]);
        }
    }
    return 0;
}
