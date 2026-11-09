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

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i < n;i++){
        if(arr[i] < 0){
            arr[i] = arr[i] * (-1);
        }
    }

    int ans = *min_element(arr.begin(),arr.end());

    cout<<ans<<endl;
    

    return 0;
}