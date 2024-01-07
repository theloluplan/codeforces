#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int a = -1, b = -1, can = 1, ca = 0, cb = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        a = v[0];
        for (int i = 0; i < n; i++) {
            if (a == -1) {
                a = v[i];
                ca++;
            } else if (v[i] != a && b == -1) {
                b = v[i];
                cb++;
            } else if (v[i] == a) {
                ca++;
            } else if (v[i] == b) {
                cb++;
            } else {
                can = 0;
                break;
            }
        }

        if (!can) {
            cout << "No" << endl;
        } else if (b == -1) {
            cout << "Yes" << endl;
        } else if (abs(ca-cb) <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}