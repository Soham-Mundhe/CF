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
    int T;
    cin >> T;

    while (T--) {
        int n;cin>>n;

        int k = n / 2020;
        int rem = n % 2020;

        (rem <= k) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }


    return 0;
}