#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    int n; cin >> n;
    int mini = 100001;
    while (n--) {
        int a = 0;
        cin >> a;
        mini = min(mini, abs(a));
    }
    cout << mini << endl;
    return 0;
}