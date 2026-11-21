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

long long mx_oc(long long moves) {
    long long q = moves / 3;

    if (moves % 3 == 0) {
        return 3 * q * (q + 1) / 2;
    }


    else if (moves % 3 == 1) {
        return (q + 1) * (3 * q + 2) / 2;
    }

    else {
        return (q + 1) * (3 * q + 4) / 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int t;
    cin >> t;

    while (t--) {
        long long h;
        cin >> h;



        long long l = 0, r = 1;


        while (mx_oc(r) < h) {

            r *= 2;
        }

        while (l < r) {
            long long mid = l + (r - l) / 2;

            if (mx_oc(mid) >= h) {
                r = mid;

            }

            else {
                l = mid + 1;

            }
        }

        cout << l << endl;
    }

    return 0;
}