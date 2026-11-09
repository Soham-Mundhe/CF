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

bool currct(string s){
    for(int i = 1;i < s.length();i++){
        if(islower(s[i])){
            return false;
        }
    }

    return true;
}



int main(){
    string s ;cin>>s;

    if(currct(s)){
        for(int i = 0;i < s.length();i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }else{
                s[i] = toupper(s[i]);
            }
        }
    }

    cout<<s<<endl;    

    return 0;
}