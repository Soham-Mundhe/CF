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
        string s;cin>>s;

        for(int i = 0;i < s.size();i++){
            if(s[i] == 'p'){
                s[i] = 'q';
            }else if(s[i] == 'q'){
                s[i] = 'p';
            }
        }

        reverse(s.begin(),s.end());

        cout<<s<<endl;
    }
    return 0;
}