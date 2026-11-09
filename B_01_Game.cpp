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
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;cin>>s;

        int o = 0,z = 0;

        for(char ch : s){
            if(ch == '1') o++;
            if(ch == '0') z++;
        }

        int mi = min(o,z);
        
        mi % 2 != 0 ? cout<<"DA"<<endl : cout<<"NET"<<endl;

    }

    return 0;
}