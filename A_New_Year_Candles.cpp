#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b;cin>>a>>b;

    int h = a;
    int ba = a;

    while(ba >= b){
        int nc = ba / b;

        h += nc;

        ba = ba % b;

        ba += nc;
    }

    cout<<h <<endl;

    return 0;
}