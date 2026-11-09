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

    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        string s1;cin>>s1;
        string s2;cin>>s2;

        for(int i = 0;i < n;i++){
            if(s1[i] == 'G') s1[i] = 'B';
            if(s2[i] == 'G') s2[i] = 'B';
        }

        s1 == s2 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    

    return 0;
}