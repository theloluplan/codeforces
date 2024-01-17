#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> vs(n);
        for (int i = 0; i < n; i ++) {
            cin >> vs[i];
        }
        int min_dif = 1000000000;
        for (int i = 1; i < n; i ++) {
            min_dif = min(min_dif, vs[i] - vs[i-1]);
        }
        if (min_dif < 0) {
            cout << "0" << endl;
        } else {
            cout << min_dif / 2 + 1 << endl;
        }
    }
    return 0;
}