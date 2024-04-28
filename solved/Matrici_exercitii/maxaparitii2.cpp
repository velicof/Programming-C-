#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 5;

int ap[maxn];

int main() {
    int v[105][105];
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> v[i][j];
            ++ap[v[i][j]];
        }
    }
    long long max = -1e9;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (v[i][j] > max && ap[v[i][j]] >= 2){
                max = v[i][j];
            }
        }
    }
if (max == -1e9){
    cout <<"IMPOSIBIL";
}else{
    cout << max;
}
    return 0;
}
