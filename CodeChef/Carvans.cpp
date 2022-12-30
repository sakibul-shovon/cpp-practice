#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    int count=1;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]<=a[i-1])
	        count++;
	        else
	        a[i]=a[i-1];
	    }
	    cout<<count<<endl;
	}
	return 0;
}