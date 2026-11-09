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
    string s,s1,s2;cin>>s>>s1>>s2;

    string a = s+s1;
    sort(a.begin(),a.end());
    sort(s2.begin(),s2.end());

    if(a == s2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}