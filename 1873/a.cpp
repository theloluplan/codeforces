#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int points = 0;
        for (int i = 1; i <= 10; i++) {
            string a; cin >> a;
            for (int j = 1; j < a.size() + 1; j++) {
                if (a[j-1] == 'X') {
                    points += min(min(min(i, j), 11 - j), 11 - i);
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}