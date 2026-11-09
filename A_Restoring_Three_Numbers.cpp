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
    vector<int>num(4);

    for(int i = 0;i < 4;i++){
        cin>>num[i];
    }

    sort(num.begin(),num.end());

    cout<<num[3] - num[0]<<' '<<num[3] - num[1]<<' '<<num[3] - num[2]<<endl;

    return 0;

}