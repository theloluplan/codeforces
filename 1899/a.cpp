#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c;
        cin >> c;
        if (c % 3 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
    return 0;
}