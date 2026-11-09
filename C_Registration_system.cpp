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
    int n;cin>>n;

    unordered_map<string,int>mp;

    while(n--){
        string s;
        cin>>s;

        if(mp.find(s) == mp.end()){
            cout<<"OK"<<endl;
            mp[s] = 1;
        }else{
            cout<<s<<mp[s]<<endl;
            mp[s + to_string(mp[s])] = 1;
            mp[s]++;
        }
    }
    return 0;

}