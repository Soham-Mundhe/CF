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
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        int l = 0;
        int r = n - 1;

        for(int i = 0;i < n;i++){
            if(s[i] == 'B')break;
            else l++;
            
        }

        for(int i = n-1;i >= 0;i--){
            if(s[i] == 'B') break;
            else r--;
            
        }

        cout<<r - l + 1<<endl;
    }
    return 0;
}