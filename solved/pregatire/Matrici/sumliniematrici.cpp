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

const int maxn = 1e5 + 5;

int main() {
    
    int v[105][105];
    // v[i] = elementul de la pozitia i
    // v[i][j] = elementul de pe linia i, coloana j
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> v[i][j];
        }
    }

    int sum = 0;


    for (int i = 1; i <= n; ++i) {
        int max = -1e9;
        sum = 0;

        for (int j = 1; j <= m; ++j) {
            if (v[i][j] >= max ) {
                max = v[i][j];
            }
            sum += v[i][j];
        }
        sum -= max;
        cout << sum << " ";
    }    

}