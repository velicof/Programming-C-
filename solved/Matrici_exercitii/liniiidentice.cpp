#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,v[105][105],nr = 0;
    cin >> n >> m; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; ++j) {
            // compar linia i cu linia j
            bool ok = true;
            for (int d = 1; d <= m; ++d) {
                if (v[i][d] != v[j][d]) {
                    ok = false;
                    break;
                }
            }
            nr += ok;
        }
    }
    cout << nr << '\n';
    return 0;

    }


