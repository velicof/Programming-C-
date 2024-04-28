#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,v[105][105];
    cin >> n >> m; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
    int nr = 0;
    for (int i = 2; i <= n; i++){    
         if (i % 2 == 0){
        for (int j = 1; j <=m; j++){
            bool ok = true;
            if (v[i][j] <= 1){
                ok = false;
            }
            for (int k = 2; k*k <= v[i][j]; k++){
                if (v[i][j] % k == 0){
                    ok = false;
                    break;
                }
            }
            if (ok){
                nr++;
            }
        } 
    } 
    }
   cout << nr;
    return 0;

    }


