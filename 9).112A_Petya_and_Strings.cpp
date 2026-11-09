#include<iostream>
#include<vector>
#include <numeric>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    for(char& ch : s1){
        ch = tolower(ch);
    }

    for(char& ch : s2){
        ch = tolower(ch);
    }

    if(s1 < s2) cout<< -1 <<endl;
    if(s1 > s2) cout<< 1 <<endl;
    if(s1 == s2) cout<< 0 <<endl;

    
    
    return 0;


}