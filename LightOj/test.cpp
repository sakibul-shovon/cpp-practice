#include <iostream>
#include <vector>

using namespace std;

vector<long long> divisors(long long num) {
    vector<long long> divs;
    for (int i = 1; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            divs.push_back(i);
            if (i != num / i) {
                divs.push_back(num / i);
            }
        }
    }
    return divs;
}

int main() {
    long long num = 2147483648;
    vector<long long> divs = divisors(num);

    cout << num << " has " << divs.size() << " divisors: ";
    for (int i = 0; i < divs.size(); i++) {
        cout << divs[i];
        if (i != divs.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
