#include <bits/stdc++.h>
using namespace std;

int l[105], c[105];
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
            l[i] += v[i][j];
            c[j] += v[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=n ; j++){
            if (l[i] == c[j]) ++ans;
        }
    }
    cout << ans << '\n';   
    return 0;
}


