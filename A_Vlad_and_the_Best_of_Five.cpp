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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    

    while(t--){
        string s;cin>>s;
        int a = 0;
        int b = 0;

        for(char ch : s){
            if(ch == 'A'){
                a++;
            }else{
                b++;
            }
        }    

        a > b ? cout<<'A'<<endl : cout<<'B'<<endl;

    }


    
    
    return 0;
}