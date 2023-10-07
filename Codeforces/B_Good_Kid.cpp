// File Name: B_Good_Kid.cpp
// Date: 2023-10-06
// Time: 00:52:06

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr, arr+n);
        arr[0] = arr[0] + 1;

        int sum = 1;
        for(int i=0;i<n;i++) {
            sum = sum * arr[i]; 
        }

        cout<<sum<<endl;
        
    }
    return 0;
}
