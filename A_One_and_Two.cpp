// #include<iostream>
// #include<vector>
// #include <numeric>
// #include<set>
// #include <algorithm>
// #include <cctype>
// #include <iomanip>
// #include <queue>
// #include <unordered_map>
// #include <climits>
// #include <unordered_set>
// #include <ctype.h>
// #include <cmath>
// using namespace std;


// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;cin>>n;
//         int t = 0;
//         for(int i = 0;i < n;i++){
//             int x;
//             cin>>x;
//             if(x == 2) t++;
//         }
//         if(t == 0){
//             cout<<1<<endl;
//             continue;
//         }
//         t % 2 == 0 ? cout<<t/2<<endl : cout<<-1<<endl;

//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[1000];
        int total2 = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];

            if(a[i] == 2)
                total2++;
        }

        if(total2 % 2 == 1) {
            cout << -1 << endl;
            continue;
        }

        int need = total2 / 2;
        int count2 = 0;

        if(total2 == 0) {
            cout << 1 << endl;
            continue;
        }

        for(int i = 0; i < n; i++) {
            if(a[i] == 2)
                count2++;

            if(count2 == need) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}