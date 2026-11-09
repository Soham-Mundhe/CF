#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main(){
    long long n ;
    cin>>n;

    vector<vector<int>>mat(n,vector<int>(1));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 1;j++){
            cin>>mat[i][j];
        }
    }

    int count = 1;
    for(int j = 0;j < 1;j++){
        for(int i = 0;i < n-1;i++){
            if(mat[i][0] != mat[i+1][j]) count++;
        }
    }

    cout<<count<<endl;
    
    
    return 0;
}