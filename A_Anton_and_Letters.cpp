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
    string s;
    getline(cin,s);
    unordered_set<char>st;
    for(char ch : s){
        if(isalpha(ch)){
            st.insert(ch);
        }
    }

    cout<<st.size()<<endl;

    return 0;

}