#include <bits/stdc++.h>
using namespace std;

ifstream fin("sumcolmax.in");
ofstream fout("sumcolmax.out");

#define cin fin
#define cout fout

int main() {
    int n,m,v[105][105],sum[1005],poz;
    cin >> n >> m; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
    for (int j = 1; j <= m; j++) {
        int S = 0;
        for (int i = 1; i <=n; i++){
            S = S + v[i][j];
        }
        sum[j] = S;
    }
    int max = -1e9;
    for (int j = 1; j <= m; j++){
        if (max < sum[j]){
            max = sum[j];
            poz = j;
        }
    }
    for (int j = 1; j <= n; j++){
        cout << v[j][poz] << " ";
    }
    return 0;

    }


