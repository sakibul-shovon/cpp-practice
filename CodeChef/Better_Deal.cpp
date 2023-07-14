#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    
    while(t--)
    {
        int a,b;cin>>a>>b;
        float A = 100 - a;
        float B = 200 - b*2;
        
        if(A==B) cout<<"BOTH"<<endl;
        else if(A<B){
            cout<<"FIRST"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
    }
}
