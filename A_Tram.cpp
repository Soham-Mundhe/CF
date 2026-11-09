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
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<vector<int>>mat(n,vector<int>(2));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 2;j++){
            cin>>mat[i][j];
        }
    }


    int sum = 0;
    int maxS = INT_MIN;

    for(int i = 0;i < n;i++){
        sum += (-mat[i][0] + mat[i][1]);
        maxS = max(sum,maxS);
    }

    cout<<maxS<<endl;

     
    
}