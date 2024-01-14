#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        char end = i == v.size() -1 ? '\n' : ' ';
        cout << v[i] << end;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> ns, bs, cs;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            ns.push_back(x);
        }
        int maxi = *max_element(ns.begin(), ns.end());
        for (int i = 0; i < n; i++) {
            if (ns[i] == maxi) {
                cs.push_back(ns[i]);
            } else {
                bs.push_back(ns[i]);
            }
        }
        if (bs.size() == 0) {
            cout << -1 << endl;
        } else {
            cout << bs.size() << " " << cs.size() << endl;
            print_vector(bs);
            print_vector(cs);
        }
    }
    return 0;
}