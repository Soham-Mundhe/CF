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
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int mx = 0;
        for(char ch : s){
            mx = max(mx,ch - 'a');
        }

        cout<<mx+1<<endl;
    }
    return 0;
}