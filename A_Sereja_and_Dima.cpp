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
    int n;cin >>n;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    // sort(arr.begin(),arr.end(),greater<int>());

    int sumS = 0;
    int sumD = 0;

    int i = 0;
    int j = n-1;
    vector<int>ans;

    while(i <= j){
        if(arr[j] > arr[i]){
            ans.push_back(arr[j]);
            j--;
        }else{
            ans.push_back(arr[i]);
            i++;
        }
    }

    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            sumS += ans[i];
        }else{
            sumD += ans[i];
        }
    }

    cout<<sumS<<" "<<sumD<<endl;



    
    return 0;
}