#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >>n;

    vector<vector<int>>mat(n,vector<int>(3));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin>>mat[i][j];
        }
    }
    int finalcount = 0;
    for(int i = 0;i < n;i++){
        int c = 0;
        for(int j = 0;j < 3;j++){
            c += mat[i][j];
        }
        if(c >= 2) finalcount++;
    }

    cout<<finalcount<<endl;

    return 0;
}