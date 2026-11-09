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

    for(int i = 0;i < s.length();){
        if(s[i] == '.'){
            cout<<0;
            i++;
        }else if(s[i] == '-' && s[i+1] == '.'){
            cout<<1;
            i+=2;
        }else{
            cout<<2;
            i+=2;
        }
    }


    return 0;
}