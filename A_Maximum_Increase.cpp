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

    vector<int>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int count = 0;

    int mx = INT_MIN;

    for(int i = 1;i < n;i++){
        if(arr[i - 1] < arr[i]){
            count++;
            mx = max(mx,count);
        }else{
            count = 0;
        }
    }

    mx = max(mx,count);

    cout<<mx + 1<<endl;
    
    return 0;
}