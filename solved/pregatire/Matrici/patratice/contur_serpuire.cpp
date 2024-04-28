#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,v[205][205],Z;
    cin >> n;

    // n = m -> avem numarul de linii egal cu cel de coloane
    // Diagonala principala si secundara
    // principala -> i == j
    // deasupra diagonalei principala -> i < j
    // sub diag principala i > j
    // secundara -> i + j == n + 1
    // deasupra diag secundare -> i + j < n + 1
    // sub diag secundara -> i + j > n + 1

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=n ; j++){
            cin >> v[i][j];
        }
    }

    int x1 = 1, y1 = 1, x2 = n, y2 = n;
    while (x1 <= x2 && y1 <= y2) {
        for (int j = y1; j <= y2; ++j) {
            cout << v[x1][j] << " ";
        }
        for (int i = x1 + 1; i <= x2; ++i) {
            cout << v[i][y2] << " ";
        }
        for (int j = y2 - 1; j >= y1; --j) {
            cout << v[x2][j] << " ";
        }
        for (int i = x2 - 1; i >= x1 + 1; --i) {
            cout << v[i][y1] << " ";
        }
        ++x1, ++y1;
        --x2, --y2;
    }

    

    return 0;
}


