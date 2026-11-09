#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main(){
    string s;
    cin>>s;

    string h = "hello";
    int count = 0;
    int j = 0;
    for(int i = 0;i < h.length();i++){
        while(j != s.length()){
            if(h[i] == s[j]){
                count++;
                j++;
                break;
            }else{
                j++;
            }
        }
    }

    if(count == 5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
    return 0;
}