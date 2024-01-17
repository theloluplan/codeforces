#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int odd_count = 0;
        for (int i = 0; i < n; i ++) {
            int x; cin >> x;
            if (x & 1) {
                odd_count++;
            }
        }
        cout << ((odd_count & 1) ? "NO" : "YES") << endl;
    }
    return 0;
}