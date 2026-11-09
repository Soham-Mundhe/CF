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
#include <map>
using namespace std;


int main() {

    int t;
    cin >> t;

    while (t--) {

        string s = "";

        for(int i = 0;i < 8;i++){
            for(int j = 0;j < 8;j++){
                char ch;
                cin>>ch;

                if(ch != '.') s += ch;
            }
        }

        cout<<s<<endl;

    }

    return 0;
}