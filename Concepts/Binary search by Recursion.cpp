// File Name: Binary search by recursion.cpp
// Date: 2022-11-16
// Time: 02:55:13

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int start,int end,int key)
{
    if(start>end)
    {
        return false;
    }

    int mid=start+(end-start)/2;

    if(arr[mid] == key)
    {
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,end,key);
    }

    else{
        return binarySearch(arr,start,mid-1,key);
    }
}

int main(){
    
   int arr[5]={1,3,4,5,6};
   int size=5;
   int key=6;
   
   int ans=binarySearch(arr,0,5,key);
   
   if(ans == true)
    {
        cout<<"Found Key"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


    return 0;
}
