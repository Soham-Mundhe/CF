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

    vector<int>arr(5,0);
    for(int i = 0;i < n;i++){
       int x;
       cin>>x;
       arr[x]++;
    }

    int count  = 0;
    
    count += arr[4];

    count += arr[3];
    arr[1] = max(0,arr[1]-arr[3]);

    count += arr[2]/2;

    if(arr[2] % 2){
        count++;
        arr[1] = max(0,arr[1]-2);
    }

    count += (arr[1] + 3) / 4;

    cout<<count<<endl;
    return 0;

}