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
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;

    for(int i = 0;i < s.length();i++){
        if(s[i] == 'H' ||s[i] == 'Q' || s[i] == '9'){
            count++;
            break;    
        }
    }

    if(count == 1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}