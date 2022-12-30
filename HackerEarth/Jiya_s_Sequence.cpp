// File Name: Jiya_s_Sequence.cpp
// Date: 2022-12-29
// Time: 11:54:50

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;
    
    while(t--){
        int n;cin>>n;
        int arr[n];
        
        long long ans =1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans = ans*arr[i];
        }
        

        int check = ans % 10;
        
        if( check == 2 || check ==3 || check == 5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
