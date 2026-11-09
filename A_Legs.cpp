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
        int n;cin>>n;

        if(n % 4 == 0)cout<<n/4<<endl;
        else cout<<n/4 + 1<<endl;
    }

    return 0;
}