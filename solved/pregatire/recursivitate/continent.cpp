#include <bits/stdc++.h>

using namespace std;
ifstream fin("fill.in");
ofstream fout("fill.out");

#define cin fin
#define cout fout

bool visited [105][105];
int continent (int v[105][105],int i, int j, int n, int m){
    if (i < 1 || i > n || j < 1 || j > m || visited[i][j] || v[i][j] == 0){
        return 0;
    }

    bool has = false;
    if (visited[i - 1][j] || visited[i + 1][j] || visited[i][j + 1] || visited[i][j - 1]) {
        has = true;
    }

    visited[i][j] = true;
    int sum = !has;
    sum += continent (v, i, j + 1, n, m);
    sum += continent (v, i + 1, j, n, m);
    sum += continent (v, i, j - 1, n ,m);
    sum += continent (v, i - 1, j, n ,m);
    return sum;
}


int main()
{
    int n,m, v[105][105];
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j =1 ; j <= m; j++)
            cin >> v[i][j];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (v[i][j] == 1) {
                ans += continent(v, i, j, n, m);
            }
        }
    }
    cout << ans << '\n';
}
    
