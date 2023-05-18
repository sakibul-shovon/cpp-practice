// File Name: A_Tram.cpp
// Date: 2023-05-13
// Time: 19:04:08

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n,a,b;//a for exit|| b for exit
    int enter = 0,exit = 0, max = 0;
    cin>>n;

    for(int i = 0;i<n;i++){
        cin>>a>>b;

        enter = enter + b - a;
        if(enter>max){
            max = enter;
        }
    }

    cout<<max<<endl;


    return 0;
}
