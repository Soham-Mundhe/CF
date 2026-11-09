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
    int T;
    cin >> T;

    while (T--) {
        int miX = INT_MAX,mxX = INT_MIN;
        int miY = INT_MAX,mxY = INT_MIN;

        for(int i = 0;i < 4;i++){
            int x,y;cin>>x>>y;

            miX = min(miX,x);
            mxX = max(mxX,x);

            miY = min(miY,y);
            mxY = max(mxY,y);

        }

        cout<<(mxX - miX) * (mxY - miY)<<endl;
    }

    return 0;
}