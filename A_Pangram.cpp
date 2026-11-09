#include<iostream>
#include<vector>
#include <numeric>
#include<set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <queue>
#include <unordered_map>
using namespace std;

int main(){
   int n;
   cin>>n;

   string s;
   cin>>s;

   
   for(char &c: s) c = (char)tolower((unsigned char)c);

   unordered_map<char,int>um;

   for(char x : s){
        um[x]++;
   }
   vector<char>v;
   for(auto& i : um){
        v.push_back(i.first);
   }


   if(v.size() == 26)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   

    return 0;
}