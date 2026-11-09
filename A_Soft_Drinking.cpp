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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    // int klTosts = (k * l) / nl;

    // int cdTost = c * d;
    
    // int salt = p/np;


    // int ans = min({klTosts,cdTost,salt})/n;

    cout<< (min({(k * l) / nl,c * d,p / np}) / n)<<endl;

}