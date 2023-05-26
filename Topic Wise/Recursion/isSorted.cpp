// File Name: isSorted.cpp
// Date: 2023-05-23
// Time: 19:23:42

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size){
    
    //base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    else{
        bool remainingPart = isSorted(arr +1 , size -1);
        return remainingPart;
    }
}




int main(){
    
    int arr[5] = {2,9,6,8,9};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Not sorted!"<<endl;
    }
    return 0;
}
