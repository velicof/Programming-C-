#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,v[105][105],sum[1005],poz;
    cin >> n >> m; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
  for (int i = 1; i <= n; i++) {
    int S = 0;
        for (int j = 1; j <=m; j++){
            S = S + v[i][j];
        }
        sum[i] = S;
    }
    int max = -1e9;
    for (int j = 1; j <= n; j++){
        if (max <= sum[j]){
            max = sum[j];
            poz = j;
        }
    }
    for (int j = 1; j <= m; j++){
        cout << v[poz][j] << " ";
    }
    return 0;

    }


