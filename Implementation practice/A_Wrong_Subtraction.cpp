// File Name: A_Wrong_Subtraction.cpp
// Date: 2023-05-13
// Time: 19:28:49

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a,count;
    cin>>a>>count;

    while(count){
        if(a%10 == 0){
            a = a/10;
        }
        else{
            a = a-1;
        }
        count--;
    }

    cout<<a<<endl;

    return 0;
}
