#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        // প্রতিটি value এর জন্য frequency
        map<int, int> cnt_a, cnt_b;
        
        for (int i = 0; i < n; i++) {
            cnt_a[a[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            cnt_b[b[i]]++;
        }
        
        long long answer = 0;
        
        // প্রতিটি possible GCD check করো
        for (const auto &pa : cnt_a) {
            int val_a = pa.first;
            int freq_a = pa.second;
            int val_a = it_a->first;
            int freq_a = it_a->second;
            
            for (map<int, int>::iterator it_b = cnt_b.begin(); it_b != cnt_b.end(); it_b++) {
                int val_b = it_b->first;
                int freq_b = it_b->second;
                
                int g = __gcd(val_a, val_b);
                
                if (isPrime(g)) {
                    answer += (long long)freq_a * freq_b;
                }
            }
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}