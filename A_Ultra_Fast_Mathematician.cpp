#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    string s,s1;
    cin>>s>>s1;

    string ans ="";

    for(int i = 0;i <s.size();i++){
        ans = ans + (to_string((s[i]-'0')^(s1[i]-'0')));
    }

    cout<<ans<<endl;

    return 0;
}