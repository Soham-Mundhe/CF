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
        int a,b,c;cin>>a>>b>>c;

        for(int i = 0;i < 5;i++){
            if(a <= b && a <= c){
                a++;
            }else if(b <= a && b <= c){
                b++;
            }else{
                c++;
            }
        }

        cout<<a*b*c<<endl;
    }

    return 0;
}