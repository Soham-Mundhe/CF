#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;

    string a = "1111111";
    string b = "0000000";
    
    if((s.find(a) != string::npos) || (s.find(b) != string::npos)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}