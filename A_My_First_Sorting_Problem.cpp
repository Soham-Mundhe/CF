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
    int T;
    cin >> T;

    while (T--) {
        int a,b;cin>>a>>b;

        int mx = max(a,b);
        int mi = min(a,b);

        cout<<mi<<' '<<mx<<endl;
    }

    return 0;
}