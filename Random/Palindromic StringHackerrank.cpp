//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    string rev;
    cin>>S;

    for(int i=S.size()-1;i>=0;i--)
    {
        rev=rev+S[i];
    }
    if(rev==S)
    {
        cout<<"YES"<<endl ;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
