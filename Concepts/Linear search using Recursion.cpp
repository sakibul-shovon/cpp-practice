// File Name: Linear search by Recursion.cpp
// Date: 2022-11-16
// Time: 02:26:22

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    if(size == 0){
        return false;
    }
    
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainPart=linearSearch(arr+1,size-1,key);
        return remainPart;
    }
}

int main(){
    
   int arr[5]={1,3,4,5,6};
   int size=5;
   int key=3;

   int ans=linearSearch(arr,size,key);
   
   if(ans==true)
   {
    cout<<"Found Key"<<endl;
   }
   else{
    cout<<"Not Found"<<endl;
   }
return 0;
}
