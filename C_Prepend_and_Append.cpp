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

int main(){

    int t;cin >>t;

    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        int i = 0;
        int j = s.length()-1;
        

        while(i < j && s[i] != s[j]){
            i++;j--;
        }
        if(i > j)cout<<0<<endl;
        else cout<<(j-i+1)<<endl;
    }

    return 0;
}