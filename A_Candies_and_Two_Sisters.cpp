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
    int n ;cin>>n;

    vector<int>arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    vector<int>ans;

    for(int i = 0;i < n;i++){
        if(arr[i] % 2 == 0){
            ans.push_back((arr[i]/2)-1);
        }else{
            ans.push_back(arr[i]/2);
        }
    }

    for(int i = 0;i < n;i++){
        cout<<ans[i]<<endl;
    }

    

    return 0;

}