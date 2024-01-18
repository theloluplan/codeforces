#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            char ch = i == n - 1 ? '\n' : ' ';
            cout << n + 1 - x  << ch;
        }
    }
}