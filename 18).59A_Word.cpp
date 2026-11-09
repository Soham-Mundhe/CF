#include<iostream>
#include<vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

string UtoL(string s){
    for(char& ch : s){
        ch = tolower(ch);
    }

    return s;
}

string LtoU(string s){
    for(char& ch : s){
        ch = toupper(ch);
    }

    return s;
}

int main(){
    string s;
    cin>>s;

    int lc = 0,uc = 0;

    for(int i = 0;i < s.length();i++){
        if(islower(s[i]))lc++;
        else uc++;
    }

    if(lc >= uc){
        cout<<UtoL(s)<<endl;
    }else{
        LtoU(s);
        cout<<LtoU(s)<<endl;
    }


    return 0;
}