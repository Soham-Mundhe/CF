
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

    int n;cin>>n;

    if(n % 2 != 0){
        cout<<-1<<endl;
        return 0;
    }

    for(int i = 1;i <= n;i += 2){
        cout<<i + 1<<" "<<i<<" ";
    }

    cout<<endl;

    return 0;
}
