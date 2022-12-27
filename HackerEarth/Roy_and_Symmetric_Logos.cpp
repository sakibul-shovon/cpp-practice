// File Name: Roy_and_Symmetric_Logos.cpp
// Date: 2022-12-28
// Time: 00:13:07
//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/

#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int t;cin>>t;
    
    while(t--){
        int n;cin>>n;
        string arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

       //check panidrome
       int flag=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            if( arr[i][j] != arr[i][n-j-1]){
                flag = flag+1;
            }
        }
       }

       
       for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != arr[n-i-1][j]){
                flag = flag+1;
            }
        }

       }

       if(flag == 0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       

       
    }
    

    return 0;
}
