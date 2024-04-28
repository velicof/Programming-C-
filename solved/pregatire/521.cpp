/*
    Programmer : Alexandru Olteanu
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,v[1005], k;

    cin >> n >> k;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    int t = n / k;

    for (int i = 1; i <= k; i++){
        for (int j = i + 1; j <= k; ++j) {
        
            int s1 = (i - 1) * t + 1;
            int s2 = (j - 1) * t + 1;
            // comparam [s1, s1 + t - 1] cu [s2, s2 + t - 1]
            int p = s2;
            bool ok = true;
            for (int p1 = s1; p1 <= s1 + t - 1; ++p1) {
                if (v[p1] != v[p]) {
                    ok = false;
                    break;
                }
                ++p;
            }

            if (ok) {
                cout << i << " " << j << '\n';
                return 0;
            }

        }
    }

    cout << "NU\n";
    

    return 0;
}


// 1 4 7 10 13          
// 1 2 3  4  5

// 1 n/k+1  2*n/k+1  3*n/k+1
// 1 2         3        4
