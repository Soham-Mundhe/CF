
#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <ctype.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int cnt = 0;

        for (char c : a) {
            if (c == 'f') cnt++;
        }

        for (char c : b) {
            if (c == 'f') cnt++;
        }

        cout << cnt % 2 << endl;
    }

    return 0;
}
