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

int main(){
    int n,k;cin>>n>>k;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int sum = 0;

    for(int i = 0;i < k;i++){
        sum += arr[i];
    }
    int minsum = sum;
    int idx = 0;

    for(int i = k;i < n;i++){
        sum += arr[i];
        sum -= arr[i-k];

        if(sum < minsum){
            minsum = sum;
            idx = i-k+1;
        }
    }

    cout<<idx+1<<endl;

    return 0;
    
}