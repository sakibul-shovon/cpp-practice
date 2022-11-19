// File Name: Sum of array by Recursion.cpp
// Date: 2022-11-18
// Time: 00:09:59
//help from: https://www.youtube.com/watch?v=cqN2EE1Q8i4

#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[],int size)
{
    //base case 0=stop / 1=return arr[0]
    if(size == 0) return 0;
    if(size == 1) return arr[0]; 

    int remainPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainPart;
    return sum;
}


int main(){

     int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;

}
