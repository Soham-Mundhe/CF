#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        set<char> ava;



        
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            ava.insert(s[0] - 'a' + 'A');
        }

        vector<string> a(m);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        vector<bool> cre(m, false);
        int count = 0;

        bool changed = true;

        while (changed) {
            changed = false;

            for (int i = 0; i < m; i++) {

                if (cre[i])
                    continue;

                bool poss = true;

    



                for (char c : a[i]) {
                    if (!ava.count(c)) {
                        poss = false;
                        break;
                    }
                }

                if (poss) {
                    cre[i] = true;
                    count++;

                
                    ava.insert(a[i][0]);

                    changed = true;
                }
            }
        }




        if (count == m)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}