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
    int n;cin>>n;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int count = 1;
    int maxi = INT_MIN;

    for(int i = 0;i < n-1;i++){
        if(arr[i] <= arr[i+1]){
            count++;
        }else{
            maxi = max(maxi,count);
            count = 1;
        }
    }

    maxi = max(maxi,count);

    cout<<maxi<<endl;
    return 0;

}