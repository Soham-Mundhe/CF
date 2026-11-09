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

        int x = 0,y = 0;
        bool ans = false;
        for(int i = 0;i < n;i++){
            if(s[i] == 'U') y++;
            else if(s[i] == 'D')y--;
            else if(s[i] == 'R') x++;
            else if(s[i] == 'L') x--;
            if(x == 1 && y == 1){
                ans = true;
                break;
            }
        }

        ans ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}