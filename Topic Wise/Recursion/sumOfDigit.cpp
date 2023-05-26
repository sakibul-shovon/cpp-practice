// File Name: sumOfDigit.cpp
// Date: 2023-05-23
// Time: 19:30:59

#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr,int size){
    //base  case
    if(size == 0){
        return 0;
    }
    
    if(size == 1){
        return arr[0];
    }

    int remainingPart = getSum(arr+1 , size-1);
   
    int sum = arr[0] + remainingPart;
    cout<<arr[0]<<"+"<<remainingPart<<"   "<<sum<<endl;
    
    return sum;



}

int main(){
    
    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr,size);

    cout<<"Sum is "<<sum<<endl;

    return 0;
}
