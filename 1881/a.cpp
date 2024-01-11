#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string x, y;
        cin >> x >> y;
        int repetitions = -1;
        for (int i = 0; i <= 5; i++) {
            if (x.find(y) != string::npos) {
                repetitions = i;
                break;
            }
            x = x + x;
        }
        cout << repetitions << endl;
    }
    return 0;
}