#include<iostream>
using namespace std;

int main()
{
    int a,b;
    const char* num[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<num[i-1]<<endl;
        }

        else if(i%2==0)
        {

                cout<<"even"<<endl;
        }
        else
            cout<< "odd"<<endl;

    }
    return 0;

}
