#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<string> us;
    for(char ch : s) {
        us.insert(string(1, ch));
    }
    
    if(us.size()%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }


    return 0;
}