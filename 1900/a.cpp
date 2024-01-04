#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string cells;
        cin >> n;
        cin >> cells;
        int largest_dots = 0;
        int dots= 0;
        int dot_count = 0;
        for (int i = 0; i < n; i++) {
            if (cells[i] == '#') {
                largest_dots = max(dots, largest_dots);
                dots = 0;
            } else {
                dot_count++;
                dots ++;
            }
        }
        largest_dots = max(dots, largest_dots);
        if (largest_dots >= 3) {
            cout << 2 << endl;
        } else {
            cout << dot_count << endl;
        }
        
    }
}