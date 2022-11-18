// File Name: A_The_New_Year_Meeting_Friends.cpp
// Date: 2022-11-07
// Time: 20:06:57
//https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[3];
    for (int  i = 0; i < 3; i++)
    {
       cin>>arr[i];
    }

    sort(arr,arr+3);
    int ans=(arr[1]-arr[0])+(arr[2]-arr[1]);

    cout<<ans<<endl;


return 0;
}
