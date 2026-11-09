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
    int a1,a2,a3,a4;cin>>a1>>a2>>a3>>a4;

    string s;cin>>s;
    int ans = 0;

    for(char ch : s){
        if(ch == '1')ans+= a1;
        if(ch == '2')ans+= a2;
        if(ch == '3')ans+= a3;
        if(ch == '4')ans+= a4;
    }

    cout<<ans<<endl;

    return 0;
}