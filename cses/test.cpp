#include <iostream>
#include <random>
#include <string>

int main() {
    // Initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 9);

    // Generate digits
    const long long size = 10e8;
    std::string digits;
    digits.reserve(size);

    // Generate random digits
    for (long long i = 0; i < size; i++) {
        digits += std::to_string(dis(gen));
        
        // Print directly to avoid storing the entire string
        std::cout << digits[i];
    }

    return 0;
}