#include <iostream>
#include <vector>
#include <limits>

void min_subarray_length(int T, const std::vector<std::pair<int, std::pair<std::vector<int>, std::vector<int>>>>& cases) {
    for (int i = 0; i < T; ++i) {
        int N, min_length = std::numeric_limits<int>::max();
        std::vector<int> A, B;
        std::cin >> N;
        A.resize(N);
        B.resize(N);
        for (int j = 0; j < N; ++j) {
            std::cin >> A[j];
        }
        for (int j = 0; j < N; ++j) {
            std::cin >> B[j];
        }
        int j = 0;
        while (j < N) {
            while (j < N && A[j] != B[j]) {
                ++j;
            }
            if (j == N) {
                break;
            }
            int subarray_length = 0;
            while (j < N && A[j] == B[j]) {
                ++subarray_length;
                ++j;
            }
            min_length = std::min(min_length, subarray_length);
        }
        std::cout << "Case " << i + 1 << ": " << min_length << std::endl;
    }
}

int main() {
    int T;
    std::cin >> T;
    std::vector<std::pair<int, std::pair<std::vector<int>, std::vector<int>>>> cases(T);
    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;
        std::vector<int> A(N), B(N);
        for (int j = 0; j < N; ++j) {
            std::cin >> A[j];
        }
        for (int j = 0; j < N; ++j) {
            std::cin >> B[j];
        }
        cases[i] = std::make_pair(N, std::make_pair(A, B));
    }
    min_subarray_length(T, cases);
    return 0;
}