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
    int t;cin>>t;

    while(t--){
        vector<int>arr(4);
        for(int i = 0;i < 4;i++){
            cin>>arr[i];
        }

        int Timur = arr[0];
        int count = 0;
        for(int i = 0;i < 4;i++){
            if(arr[i] > Timur)count++;
        }


        cout<<count<<endl;
    }

    return 0;
}