// File Name: A_Maximum_Increase.cpp
// Date: 2023-06-06
// Time: 13:57:10

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    int   maxLength=1,currentLength=1;

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n-1;i++){
        if(arr[i+1] > arr[i]){
            currentLength++;
        }
        else{
            currentLength  = 1;
        }

        if( currentLength > maxLength){
            maxLength = currentLength;
        }

    }

    cout<<maxLength<<endl;

    return 0;
}
 