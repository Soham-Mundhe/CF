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

    string s;cin>>s;

    for(int i = 0;i < s.length();i++){
        int dig = s[i] - '0';

        if( i== 0 && dig == 9){
            continue;
        }

        dig = min(dig,9-dig);

        s[i] = dig + '0';
    }

    cout<<s<<endl;
    

    return 0;
    
}