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
using namespace std;

int main(){
    int n ;cin>>n;
    int p;cin>>p;
    

    vector<int>pl(p);
    

    for(int i = 0;i < p;i++){
        cin>>pl[i];
    }

    int q;cin>>q;
    vector<int>ql(q);

    for(int i = 0;i < q;i++){
        cin>>ql[i];
    }

    unordered_set<int>st;

    for(int x : pl){
        st.insert(x);
    }
    
    for(int x : ql){
        st.insert(x);
    }

    if(st.size() == n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;


    return 0;

}