#include<iostream>
#include<vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    vector<int>mat;

    for(int i = 0;i < s.length();i+=2){
        mat.push_back(s[i] - '0');
    }

    sort(mat.begin(),mat.end());

    string ans = "";
    for(int i = 0;i < mat.size();i++){
        ans += to_string(mat[i]);

        if(i != mat.size()-1){
            ans+='+';
        }
    }

    cout<<ans<<endl;
    return 0;

    
}