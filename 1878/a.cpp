#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string possible = "NO";
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a == k) {
                possible = "YES";
            }
        }
        cout << possible << endl;
    }
}