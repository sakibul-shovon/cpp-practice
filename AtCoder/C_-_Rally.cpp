// File Name: C_-_Rally.cpp
// Date: 2022-11-29
// Time: 16:59:05

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    int arr[t];
    int sum=0;

    for(int i=0;i<t;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    //cout<<sum<<endl;
    
    float  avg=float(sum)/float(t); 
    int n=round(avg); //cout<<"n = "<<n <<endl;
    
    int ans=0;

    for(int i=0;i<t;i++){
        ans=ans+ pow( (arr[i]-n),2); 
    }

    cout<<ans; 


    return 0;
}
