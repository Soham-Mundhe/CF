#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t ;cin>>t;

    while(t--){
        int k ;
        cin>>k;

        vector<long long>c(k);

        bool ok = false;
        int cnt = 0;

        for(int i = 0;i < k;i++){
            cin>>c[i];

            if(c[i] >= 3)ok = true;

            if(c[i] >= 2) cnt++;

        }

        if(ok || cnt >= 2){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }

    return 0;
}


