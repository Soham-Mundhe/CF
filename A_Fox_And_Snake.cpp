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
    int m;cin>>m;

    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            for(int j = 0;j < m;j++){
                cout<<'#';
            }
        }else if((i/2) % 2 == 0){
            for(int j = 0;j < m-1;j++){
                cout<<'.';
            }
            cout<<'#';
        }else {
            cout<<'#';
            for(int j = 0;j < m-1;j++){
                cout<<'.';
            }
        }

        cout<<endl;
    }

    return 0;

}