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
    int n;cin>>n;
    vector<vector<int>>mat(n,vector<int>(3));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin>>mat[i][j];
        }
    }


    vector<string>ans;
    for(int i = 0;i < n;i++){
        
        if((mat[i][0] == mat[i][1] + mat[i][2]) || (mat[i][1] == mat[i][0] + mat[i][2]) || (mat[i][2] == mat[i][1] + mat[i][0])){
            ans.push_back("YES");
        }else{
            ans.push_back("NO");
        }
    }
    


    for(int i = 0;i < n;i++){
        cout<<ans[i]<<endl;
    }

    return 0;

}