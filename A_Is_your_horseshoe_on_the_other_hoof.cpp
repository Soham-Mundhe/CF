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
using namespace std;

int main(){
    vector<int>hoeshu(4);

    for(int i = 0;i < 4;i++){
        cin>>hoeshu[i];
    }

    unordered_set<int>st(hoeshu.begin(),hoeshu.end());

    cout<<4 - st.size()<<endl;

    return 0;
}