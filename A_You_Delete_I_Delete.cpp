#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string bestAlice = "";

        bool firstAlice = true;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] != '0') continue;

            string afterAlice = s.substr(0, i) + s.substr(i + 1);

            string bestBob = "";
            bool firstBob = true;

            for (int j = 0; j < (int)afterAlice.size(); j++) {
                if (afterAlice[j] != '1') continue;

                string cur = afterAlice.substr(0, j) + afterAlice.substr(j + 1);

                if (firstBob || cur < bestBob) {
                    bestBob = cur;
                    firstBob = false;
                }
            }

            if (firstAlice || bestBob > bestAlice) {
                bestAlice = bestBob;
                firstAlice = false;
            }
        }

        cout << bestAlice << endl;
    }

    return 0;
}