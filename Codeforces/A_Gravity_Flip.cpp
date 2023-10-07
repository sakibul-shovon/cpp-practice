// File Name: A_Gravity_Flip.cpp
// Date: 2023-07-17
// Time: 19:34:32

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=1;i<=n;i++) cin>>arr[i];

    sort(arr,arr + n);

    for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    return 0;
}
