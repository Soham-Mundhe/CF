
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

    int n;cin>>n;

    string s;cin>>s;
    int z =0,o = 0;

    for(int i = 0;i < n;i++){
        if(s[i] == '0') z++;
        else o++;    
    }


    cout<<abs(z - o)<<endl;

    return 0;
}
