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
#include <map>
using namespace std;

int f(int x) {
    int sum = 0;

    while (x > 0) {
        int d = x % 10;
        sum += d * d;
        x /= 10;
    }

    return sum;
}


int getState(int x) {


    vector<int> cycle = {
        4, 16, 37, 58, 89, 145, 42, 20
    };

    int steps = 0;

    while (true) {

        if (x == 1) {
            return 0;
        }

        int pos = -1;

        for (int i = 0; i < 8; i++) {
            if (cycle[i] == x) {
                pos = i;
                break;
            }
        }

        if (pos != -1) {

            int phase = (pos - steps) % 8;

            if (phase < 0)
                phase += 8;

            return phase + 1;
        }

        x = f(x);
        steps++;
    }
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++) {

            int x;
            cin >> x;

            int state = getState(x);

            mp[state]++;
        }

        long long ans = 0;

        for (auto &p : mp) {

            long long cnt = p.second;

            ans += cnt * (cnt - 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}