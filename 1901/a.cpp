#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int n, x, a;
        cin >> n >> x;
        int maxi = 0;
        int prev = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            maxi = max(maxi, a - prev);
            prev = a;
        }
        maxi = max(maxi, 2 * (x - a));
        cout << maxi << endl;
    }
    return 0;
}