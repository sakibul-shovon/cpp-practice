// File Name: Division_by_3.cpp
// Date: 2023-05-22
// Time: 20:42:45

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;
        long long first = 1;
        long long count = 0;
        
        for(int i = 2;i<=b;i++){
            first = (first*10)+i;
            cout<<first<<endl;

            
        }
        



    }

    return 0;
}
