#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }


    sort(arr.begin(), arr.end(), greater<int>());

    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += arr[i];
    }

    int count = 0;
    int take = 0;
    
    for(int i = 0;i < n;i++){
        take += arr[i];
        sum -= arr[i];
        count++;

        if(take > sum)break;;
    }
   

    cout<<count<<endl;

    return 0;
}