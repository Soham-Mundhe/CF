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
    

    int n,m;cin>>n>>m;
    bool s = false;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            char ch;
            cin>>ch;

            if(ch != 'W' && ch != 'B' && ch != 'G'){
                s = true;
            }
        }
    }

    if(s) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;

    
    return 0;
}