// File Name: A_Theatre_Square.cpp
// Date: 2023-06-05
// Time: 20:49:05

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    long long m,n,a,x,y;
    cin>>m>>n>>a;

    if(m%a == 0){
        x = m/a;
    }
    else{
        x = m/a + 1;
    }

    if(n%a == 0){
        y = y / a;
    }
    else{
        y = n/a + 1;
    }

    long long ans = x*y;
    cout<<ans<<endl;
    

    return 0;
}
