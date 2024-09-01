#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    queue<pair<string, int>> processes;
    string name;
    int time;

    // Read the input processes
    for (int i = 0; i < n; ++i) {
        cin >> name >> time;
        processes.push({name, time});
    }

    int currentTime = 0;

    while (!processes.empty()) {
        pair<string, int> p = processes.front();
        processes.pop();

        if (p.second <= q) {
            currentTime += p.second;
            cout << p.first << " " << currentTime << endl;
        } else {
            currentTime += q;
            processes.push({p.first, p.second - q});
        }
    }

    return 0;
}
