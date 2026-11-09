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

    vector<int>v1,v2,v3;

    for(int i = 1;i <= n;i++){
        int x;cin>>x;

        if(x == 1) v1.push_back(i);
        else if(x == 2) v2.push_back(i);
        else v3.push_back(i);
    }

    int tim = min({v1.size(),v2.size(),v3.size()});

    cout<<tim<<endl;

    for(int i = 0;i < tim;i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    
    

    return 0;

}