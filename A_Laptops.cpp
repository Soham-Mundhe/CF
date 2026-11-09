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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;

    vector<pair<int,int>>lap;

    for(int i = 0;i < n;i++){
        int p,q;

        cin>>p>>q;

        lap.push_back({p,q});
    }

    sort(lap.begin(),lap.end());

    for(int i = 1;i < n;i++){
        if(lap[i].second < lap[i-1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;


    return 0;
}