#include<iostream>
#include<vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(char& ch : s){
        ch = tolower(ch);
    }

    // for(int i = 0;i < s.length();i++){
    //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
    //         s.erase(i,1);
    //         i--;
    //     }
    // }

    // string ans = "";

    // for(int i = 0;i < s.length();i++){
    //     if(i != s.length()){
    //         ans+='.';
    //     }
    //     ans += s[i];

        
    // }


    string ans = "";
    for(char ch : s){
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y'){
            ans += '.';
            ans += ch;
        }
    }


    cout<<ans<<endl;

    return 0;
}