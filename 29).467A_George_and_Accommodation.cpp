#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <unordered_set>
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

    int count = 0;

    for(int i = 0;i < n;i++){
        if(abs(mat[i][0] - mat[i][1]) >= 2) count++;
    }

    cout<<count<<endl;

    
    return 0;
}