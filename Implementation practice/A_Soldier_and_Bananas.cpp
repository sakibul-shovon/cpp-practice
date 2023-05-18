// File Name: A_Soldier_and_Bananas.cpp
// Date: 2023-05-16
// Time: 23:46:05

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int k,n,w;
    cin>>k>>n>>w;
    int sum = 0;

    for(int i=1;i<=w;i++){
        sum += k*i;
    }

    int ans = sum - n;
    
    if(ans<0){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}
