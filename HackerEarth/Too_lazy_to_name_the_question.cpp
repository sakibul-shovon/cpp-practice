// File Name: Too_lazy_to_name_the_question.cpp
// Date: 2022-12-30
// Time: 00:28:17

#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
  int gcd = 1;
  for (int i = 2; i <= a && i <= b; ++i) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }
  return (a * b) / gcd;
}

int main(){
    
   int a,b,c;
   cin>>a>>b>>c;

   int count = 0;
   int i=1;
   int final;
   while(count != c){
    if(i%a ==0 || i%b==0){
        count++;
        final= i;
    }
    i++;
   }

   int diff;

    if(final%a==0 && final%b==0){
        diff = lcm(a,b);
    }
    else if(final %a ==0){
        diff = a;
    }
    else{
        diff = b;
    }

    for(int i=final;i>=0;i=i-diff){
        cout<<i<<" ";
    }



    return 0;
}



