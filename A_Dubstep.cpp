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

    bool fw = true;

    for(int i = 0;i < s.length();){
        if(i + 2 < s.length() && s.substr(i,3) == "WUB"){

            while(i+2 < s.length() && s.substr(i,3) == "WUB"){
                i += 3;
            }

            if(i < s.length() && !fw)
                cout<<" ";
        }else{
            cout<<s[i];
            fw = false;
            i++;
        }
    }
    
    return 0;

}