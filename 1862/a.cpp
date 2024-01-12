#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        vector<int> seq;
        int n; cin >> n;
        int prev; cin >> prev;
        seq.push_back(prev);
        for (int i = 1; i < n; i++ ) {
            int current; cin >> current;
            if (current < prev) {
                seq.push_back(1);
            }
            seq.push_back(current);
            prev = current; 
        }
        cout << seq.size() << endl;
        for (int i = 0; i < seq.size(); i ++) {
            char end = i == seq.size() - 1 ? '\n' : ' ';
            cout << seq[i] << end;
        }
    }
    return 0;
}