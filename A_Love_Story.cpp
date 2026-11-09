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
    int t;cin>>t;

    while(t--){
        string s;cin>>s;
        int count = 0;

        string mas = "codeforces" ;

        for(int i = 0;i < mas.size();i++){
            if(mas[i] != s[i])count++;
        }

        cout<<count<<endl;
      
    }
    

    return 0;
    
}