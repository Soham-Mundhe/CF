#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(3));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin>>mat[i][j];
        }
    }

    vector<int>ans;
    for(int j = 0;j < 3;j++){
        int sum = 0;
        for(int i = 0;i < n;i++){
            sum += mat[i][j];
        }

        ans.push_back(sum);
    }

    if(ans[0] == 0 && ans[1] == 0 && ans[2] == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}