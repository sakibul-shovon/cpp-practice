// File Name: A_In_Search_of_an_Easy_Problem.cpp
// Date: 2022-11-28
// Time: 00:33:17

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    int ans=0;

    while(t--)
    {
        int n;
        cin>>n;
        if(n==1){
            ans++;
        }
    }

    if(ans==0)
    {
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
return 0;
}
