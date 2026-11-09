// #include<iostream>
// #include<vector>
// using namespace std;


//     TC = O(n^2)
// int main(){
//     int n;cin >>n;
//     vector<vector<int>>mat(n,vector<int>(2));

//     for(int i = 0;i < n;i++){
//         for(int j = 0;j < 2;j++){
//             cin>>mat[i][j];
//         }
//     }
//     int count = 0;

//     for(int i = 0;i < n;i++){
//         for(int j = 0;j < n;j++){
//             if(i != j && mat[i][0] == mat[j][1]) count++;
//         }
//     }

//     cout<<count<<endl;
//     return 0;
// }





// TC = O(n)

#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<int,int>> teams(n);
    vector<int> home(101, 0);

    for(int i = 0; i < n; i++){
        cin >> teams[i].first >> teams[i].second;
        home[teams[i].first]++;
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        ans += home[teams[i].second];
    }

    cout << ans << endl;

    return 0;
}