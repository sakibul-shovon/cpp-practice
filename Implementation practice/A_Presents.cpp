// File Name: A_Presents.cpp
// Date: 2023-05-13
// Time: 14:37:10

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int arr1[n],arr2[n];

    for(int i=1;i<=n;i++){
        cin>>arr1[i];

        arr2[arr1[i]] = i;
    }

    for(int i=1;i<=n;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}
