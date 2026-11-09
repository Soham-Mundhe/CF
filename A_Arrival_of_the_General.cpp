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
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    int maxE = *max_element(arr.begin(),arr.end());
    int minE = *min_element(arr.begin(),arr.end());

    int maxI = INT_MAX;
    int minI = INT_MIN;

    for(int i = 0;i < n;i++){
        if(arr[i] == maxE ){
            maxI = min(maxI,i);
        }

        if(arr[i] == minE){
            minI = max(minI,i);
        }

    }

    int ans =maxI + (n-1-minI);

    if(maxI > minI) ans--;
    cout<<ans<<endl;


    return 0;

}