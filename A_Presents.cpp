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
    int n;
    cin>>n;

    vector<int>gift(101);
    for(int i = 1;i <= n;i++){
       int x;
       cin>>x;
       gift[x] = i;
    }

    

    for(int i = 1;i <= n;i++){
        cout<<gift[i]<<' ';
    }

    return 0;

}