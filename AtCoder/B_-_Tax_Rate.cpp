// File Name: B_-_Tax_Rate.cpp
// Date: 2022-11-30
// Time: 02:25:33

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;cin >>n; 
    
    int x=ceil(n/1.08);
    int y=x*1.08;

    if(y == n)
    {
        cout<<x<<endl;
    }

    else{
        cout<<":("<<endl;
    }

    

    return 0;
}
