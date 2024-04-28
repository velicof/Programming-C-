#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,v[105][105],pos = 0;
    cin >> n >> m; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
     int max = -1e9;
     for (int i = 1; i <= n; i++) {
        int S = 0;
        for (int j = 1; j <=m; j++){
            if (v[i][j] % 2 == 0){
                S += v[i][j];
            }
        }
        if ( S >= max){
            max = S;
            pos = i;
        }
    }
    cout << pos ;
    return 0;

    }


