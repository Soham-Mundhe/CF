#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i = 0;i < n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i = 0;i < n;i++){
        cout<<v[i]<<' ';
    }

    cout<<endl;
    return 0;
}