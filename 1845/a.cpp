#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            cout << 1;
            n--;
            while (n--) {
                cout << " " << 1;
            }
            cout << endl;
        } else if (k >= 3) {
            cout << "YES" << endl;
            if (n % 2) {
                cout << 1 + (n - 3) / 2 << endl;
                cout << 3;
                n -= 3;
                while (n) {
                    cout << " " << 2;
                    n -= 2;
                }
                cout << endl;
            } else {
                cout << n / 2 << endl;
                cout << 2;
                n -= 2;
                while (n) {
                    cout << " " << 2;
                    n -= 2;
                }
                cout << endl;
            }
        } else if (k == 2) {
            if (n % 2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                cout << 2;
                n -= 2;
                while (n) {
                    cout << " " << 2;
                    n -= 2;
                }
                cout << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}