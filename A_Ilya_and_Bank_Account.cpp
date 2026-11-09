#include<iostream>
#include<vector>
#include <numeric>
#include <set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <ctype.h>
#include <math.h>
using namespace std;


int main() {
    int n; cin >> n;
    if (n >= 0) {
        cout << n << endl;
        return 0;
    }

    int option1 = n / 10;
    int option2 = (n / 100) * 10 + n % 10;
    cout << max(option1, option2) << endl;

    return 0;
}