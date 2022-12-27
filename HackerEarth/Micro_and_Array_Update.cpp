// File Name: Micro_and_Array_Update.cpp
// Date: 2022-12-27
// Time: 10:32:39
//Detailed Explanation:
// Since we can only increase all the elements by 1, the minimum element will take most step to reach K. So we have to find the minimum element in array A and answer will difference between K and minimum element.
// One corner case is if K is less than minimum element in the array A.
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;
    

    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = k;

        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            ans=min(temp,ans);

        }

        cout<<k-ans<<endl;
    }
    return 0;
}
