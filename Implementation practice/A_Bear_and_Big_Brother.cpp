// File Name: A_Bear_and_Big_Brother.cpp
// Date: 2023-05-18
// Time: 00:55:47

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int limak,big_bro;
    cin>>limak>>big_bro;

    int count = 0;

    while(limak <= big_bro){
        limak = 3*limak;
        big_bro = 2*big_bro;
        count = count + 1;
    }

    cout<<count<<endl;

    return 0;
}
