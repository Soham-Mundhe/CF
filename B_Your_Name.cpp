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


int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;cin>>n;

        string s,u;cin>>s>>u;

        sort(s.begin(),s.end());
        sort(u.begin(),u.end());

        s == u ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }

    return 0;
}