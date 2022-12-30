// File Name: Monk_and_his_love_for_Primes.cpp
// Date: 2022-12-30
// Time: 20:18:35

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int count  = 0;
    for(int i=2;i<(n/2);i++){
        if(n%i == 0){
            count = count +1;
        }
    }

    if(count == 0){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    
    string s;
    cin>>s;
    int result =0;

    for(int i=0;i<s.length();i++){
        if(s[i] >='a' && s[i] <='z'){
            s[i] = toupper(s[i]);
            result = result - s[i];
        }
        else{
            s[i] = tolower(s[i]);
            result = result + s[i];
        }
    }

    if(result < 0) result = result *-1;
    
    if(isPrime(result) == true){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
