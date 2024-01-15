#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        a += c % 2;
        if (a <= b) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
    return 0;
}