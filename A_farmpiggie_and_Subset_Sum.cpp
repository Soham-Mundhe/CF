#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);

        int ev = 2;
        int od = 1;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                p[i] = ev;
             ev += 2;
            } else {
                p[i] = od;
                od += 2;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}