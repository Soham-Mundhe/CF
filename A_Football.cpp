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

        vector<string>v(n);
        for(int i = 0;i < n;i++){
            cin>>v[i];
        }
        string ans = v[0],ans2 = "";
        int c1 = 0,c2 = 0;
        
        
        for(string x : v){
            if(x == ans){
                c1++;
            }else{
                ans2 = x;
                c2++;

            }
        }

        if(c1 > c2) cout<<ans<<endl;
        else cout<<ans2<<endl;

        return 0;
        
    }