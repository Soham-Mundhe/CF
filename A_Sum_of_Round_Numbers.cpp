#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;cin>>n;

    vector<string>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    vector<string>an;

    for(int i = 0;i < n;i++){
        int count = 0;
        for(int j = 0;j < arr[i].size();j++){
            if(arr[i][j] != '0'){
                count++;
            }
        }

        string ans = "";

        for(int j = 0;j < arr[i].size();j++){
            if(arr[i][j] == '0') continue;

            ans += arr[i][j];

            for(int k = 0;k < arr[i].size()-j-1;k++){
                ans += '0';
            }

            if(j != arr[i].size()-1){
                ans += ' ';
            }
        }

        an.push_back(to_string(count));
        an.push_back(ans);
    }

    for(int i = 0;i < an.size();i++){
        cout<<an[i]<<endl;
    }

    return 0;
}


