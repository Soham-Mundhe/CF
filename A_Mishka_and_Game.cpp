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
    int t;cin>>t;

    
    int mica = 0;
    int ca = 0;

    while(t--){
        int m,c;cin>>m>>c;

        if(m > c)mica++;
        else if (c > m)ca++;

    }

    if(mica > ca)cout<<"Mishka"<<endl;
    else if(ca > mica)cout<<"Chris" <<endl;
    else cout<<"Friendship is magic!^^" <<endl;


    return 0;
    
}