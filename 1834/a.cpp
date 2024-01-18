#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x > 0) {
                pos++;
            } else {
                neg++;
            }
        }
        int c = 0;
        if  (neg % 2) {
            c = 1;
            pos += 1;
            neg -= 1;
        }
        if (pos >= neg) {
            cout << c << endl;
        } else {
            float k = (neg - pos);
            int c1 = ceil(k/2);
            cout << c + (c1 % 2 == 0 ? c1 : c1 + 1) << endl;
        }
        
    }
    return 0;
}