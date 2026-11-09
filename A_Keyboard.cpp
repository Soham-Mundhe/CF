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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    char ch ;cin>>ch;
    string q ;cin>>q;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for(int i = 0;i < q.size();i++){
        int pos = s.find(q[i]);

        if(ch == 'R'){
            q[i] = s[pos - 1];
        }else{
            q[i] = s[pos + 1];
        }
    }
    
    cout<<q<<endl;
    
    return 0;
}