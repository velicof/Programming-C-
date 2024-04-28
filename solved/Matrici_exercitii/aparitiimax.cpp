#include <iostream>
#include <climits>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("numere8.in");
ofstream fout("numere8.out");

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
    int max_ap = 0;
    for (int i = 0; i < maxn; ++i) {
        if (ap[i] > max_ap) {
            max_ap = ap[i];
        }
    }

    // Aici vom afișa toate numerele cu numărul maxim de apariții
    for (int i = 0; i < maxn; ++i) {
        if (ap[i] == max_ap) {
            cout << i << " ";
        }
    }
    
    return 0;
}
