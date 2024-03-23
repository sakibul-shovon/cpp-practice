#include <bits/stdc++.h>
using namespace std;

//recursive implementation
int LcmOfArray(vector<int> arr, int idx){
	// lcm(a,b) = (a*b/gcd(a,b))
	if (idx == arr.size()-1){
		return arr[idx];
	}
	int a = arr[idx];
	int b = LcmOfArray(arr, idx+1);
	return (a*b/__gcd(a,b)); // __gcd(a,b) is inbuilt library function
}


int main() {
	
    int n;cin>>n;
	vector<int> v(n) ;
    for(int i = 0 ; i<n;i++){
        cin>>v[i];
    }
	cout << LcmOfArray(arr, 0) << "\n";
	
	return 0;
} 
