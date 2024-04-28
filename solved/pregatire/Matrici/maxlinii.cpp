#include <iostream>
#include <cmath>
#include <climits>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("numere8.in");
ofstream fout("numere8.out");

// #define cin fin
// #define cout fout

const int maxn = 1e6 + 5;

int ap [maxn];

int main() {
    
    int v[105][105];
    // v[i] = elementul de la pozitia i
    // v[i][j] = elementul de pe linia i, coloana j
    // s[i] = suma de pe linia i
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> v[i][j];
            ++ap[v[i][j]];
        }
    }
    int max = -1e9;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (ap[v[i][j]] > max){
                max = ap[v[i][j]];
            }
        }
    }
     int max2 = 0;
     for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (max == ap[v[i][j]]){
                if (v[i][j] > max2)
                    max2 = v[i][j];
            }
        }
     }

     cout << max2;
        
    
    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= m; ++j) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << '\n';
    // }    
}

