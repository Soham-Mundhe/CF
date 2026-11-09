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

    vector<int>mat(n);
    for(int i = 0;i < n;i++){
        cin>>mat[i];
    }

    sort(mat.begin(),mat.end());

    if(mat[n-1] == 1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

    return 0;
}