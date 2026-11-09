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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    

    while(t--){
       int n;cin>>n;


       map<int,int>freq;

       for(int i = 0;i < n;i++){
            int x;cin>>x;
            freq[x]++;
       }

       if(freq.size() > 2){
            cout<<"NO"<<endl;
            continue;
       }

       if(freq.size() == 1){
            cout<<"YES"<<endl;
            continue;
       }

       int maxfreq = 0 ;

       for(auto p : freq){
            maxfreq = max(maxfreq,p.second); 
       }

       if(maxfreq <= (n + 1)/2){
            cout<<"YES"<<endl;
       }else{
            cout<<"NO"<<endl;
       }

    }


    
    
    return 0;
}