// File Name: A_Vanya_and_Cubes.cpp
// Date: 2023-06-08
// Time: 12:05:23

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int sum=0,i=1,count=0,test = 0;

    while(n){
        sum = sum+i;
        i++;
        test = test + sum;
        if(test<=n){
            count++;
        }    
        else{
            break;
        }
    }
    cout<<count<<endl;


    return 0;
}
