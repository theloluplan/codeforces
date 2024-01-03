#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cases, x;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        int n, k;
        int increasing = true;
        cin >> n >> k;
        vector<int> as;
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (as.size() != 0 && x < as.back()) {
                increasing = false;
            }
            as.push_back(x);
        }
        // cout << k << " " << increasing << endl;
        if (k > 1 || increasing) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}