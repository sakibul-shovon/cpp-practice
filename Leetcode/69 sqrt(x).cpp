#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) // Base cases: sqrt(0) = 0, sqrt(1) = 1
        return x;

    vector<int> squares; // Store squares of numbers
    int i = 0;

    // Populate squares vector with squares of numbers from 0 to x/2
    while (true) {
        int square = i * i;
        if (square <= x) {
            squares.push_back(square);
            ++i;
        } else {
            break;
        }
    }

    // Use lower_bound to find the largest square less than or equal to x
    auto it = lower_bound(squares.begin(), squares.end(), x);

    if (it == squares.begin()) // If x is less than the smallest square
        return 0;

    // Return the square root (index) of the found square
    return distance(squares.begin(), it) - 1;
}

int main() {
    int x = 8;
    cout << "Square root of " << x << " is: " << mySqrt(x) << endl;
    return 0;
}


// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned



