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

        int sum = 0;

        for(int i = 0;i < n-1;i++){
            int x;cin>>x;

            sum += x;
        }

        cout<<-sum<<endl;
    }


    return 0;
}