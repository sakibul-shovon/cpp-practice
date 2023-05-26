// File Name: factorial.cpp
// Date: 2023-05-25
// Time: 00:28:10

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
    return 0;
}
