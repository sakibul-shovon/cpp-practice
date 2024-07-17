// File Name: Check_bit.cpp
// Date: 2024-06-29
// Time: 01:14:39

#include <bits/stdc++.h>
using namespace std;

int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}

int main(){
    
    int a,i;
    cin>>a>>i;
    if(check_kth_bit(a,i)){cout<<"true"<<endl;}
    else cout<<"false"<<endl;
    return 0;
}
