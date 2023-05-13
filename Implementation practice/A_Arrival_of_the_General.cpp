// File Name: A_Arrival_of_the_General.cpp
// Date: 2023-05-13
// Time: 12:36:05

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int max_ind = 0,min_ind=0,max_ht=INT_MIN,min_ht = INT_MAX;


    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        
        if(a > max_ht){
            max_ht = a;
            max_ind = i;
        }
        
        if(a <= min_ht){
            min_ht = a;
            min_ind = i;
        }
        
    }

    if(max_ind > min_ind){
        cout<<max_ind+(n -1 - min_ind) - 1;
    }

    else{
        cout<<max_ind + (n - 1 - min_ind);
    }

    return 0;
}
