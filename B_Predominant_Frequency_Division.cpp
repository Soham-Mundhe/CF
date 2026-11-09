#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;


    while(t--){
        int n;cin>>n;

        vector<int>a(n);

        for(int i = 0;i < n;i++){
            cin>>a[i];
        }

        vector<int>pre1(n+1,0),pre2(n+1,0);

        for(int i = 1;i <= n;i++){
            pre1[i] = pre1[i-1] + (a[i-1]==1 ? 1:-1);
            pre2[i] = pre2[i-1] + (a[i-1]==3 ? -1:1);
        }

        const int NEG = -1e9;

        vector<int>sufM(n+2,NEG);

        for(int i = n-1;i >= 1;i--){
            sufM[i] = max(sufM[i+1],pre2[i]);
        }

        bool ko = false;


        for(int x = 1;x <= n-2;x++){
            if(pre1[x] >= 0 && sufM[x+1] >= pre2[x]){
                ko = true;
                break;
            }
        }

        cout<<(ko ? "YES" : "NO")<<endl;
    }
    return 0;
}


