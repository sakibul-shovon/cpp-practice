// File Name: return nth number of palindrome.cpp
// Date: 2023-06-03
// Time: 11:46:15

#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1){
        return n;
    } 

    int last = f(n-1);
    int second_last =  f(n-2);
    return last + second_last;
}

int main(){
    
    int n;
    cin>>n;

    cout<<f(n)<<endl;
    return 0;
}
