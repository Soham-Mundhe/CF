#include<iostream>
#include<vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    if(isupper(s[0]))cout<<s<<endl;
    else {
        char ch = toupper(s[0]);
        cout<<ch << s.substr(1) <<endl;
    }
    
    return 0;
}