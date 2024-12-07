#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy9(string &n) {
    int digitSum = 0;
    for (char c : n) {
        digitSum += (c - '0');
    }
    // Check if the sum is already divisible by 9
    if (digitSum % 9 == 0) return true;

    // Check if squaring a single digit works
    for (char c : n) {
        int originalDigit = c - '0';
        if (originalDigit >= 0 && originalDigit <= 3) { // Only digits 0-3 can be squared
            int squaredDigit = originalDigit * originalDigit;
            int newSum = digitSum - originalDigit + squaredDigit;
            if (newSum % 9 == 0) return true;
        }
    }

    // Check combinations of two digits
    int len = n.length();
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            int digit1 = n[i] - '0';
            int digit2 = n[j] - '0';
            if (digit1 >= 0 && digit1 <= 3 && digit2 >= 0 && digit2 <= 3) {
                int squaredDigit1 = digit1 * digit1;
                int squaredDigit2 = digit2 * digit2;
                int newSum = digitSum - digit1 - digit2 + squaredDigit1 + squaredDigit2;
                if (newSum % 9 == 0) return true;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (isDivisibleBy9(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
