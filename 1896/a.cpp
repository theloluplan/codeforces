#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a, b;
        cin >> a;
        for (int i = 1; i < n; i++) {
            cin >> b;
        }
        if (a == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}