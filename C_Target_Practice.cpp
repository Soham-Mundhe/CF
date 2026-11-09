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

        vector<vector<char>>mat(10,vector<char>(10));

        for(int i = 0;i < 10;i++){
            for(int j = 0;j < 10;j++){
                cin>>mat[i][j];
            }
        }

        int ans = 0;

        for(int i = 0;i < 10;i++){
            for(int j = 0;j < 10;j++){
                if(mat[i][j] == 'X'){
                    ans += min({i,j,9-i,9-j}) + 1;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
    
}