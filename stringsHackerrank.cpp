//https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char c1=a[0];
    char c2=b[0];

    a[0]=c2;
    b[0]=c1;

    cout<<a<<" "<<b<<endl;
    return 0;
}
