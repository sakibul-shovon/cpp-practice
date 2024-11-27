#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Number of towers
    cin >> n;

    vector<int> blocks; // To store all blocks in sequence
    for (int i = 0; i < n; i++) {
        int k; // Number of blocks in the current tower
        cin >> k;
        for (int j = 0; j < k; j++) {
            int block;
            cin >> block;
            blocks.push_back(block); // Add the block to the sequence
        }
    }

    // Count the number of split operations
    int splits = 0;
    for (size_t i = 1; i < blocks.size(); i++) {
        if (blocks[i] != blocks[i - 1] + 1) {
            splits++;
        }
    }

    // Number of combine operations
    int combines = n + splits - 1;

    // Output the result
    cout << splits << " " << combines << endl;

    return 0;
}
