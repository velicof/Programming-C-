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
    
    int v[105][105], s[105];
    // v[i] = elementul de la pozitia i
    // v[i][j] = elementul de pe linia i, coloana j
    // s[i] = suma de pe linia i
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> v[i][j];
        }
    }

    int sum;


    for (int i = 1; i <= n; ++i) {
        sum = 0;
        for (int j = 1; j <= m; ++j) {
            sum += v[i][j];         
        }
        s[i]=sum;
    }

    bool sortat = false;
    while (!sortat){
        sortat = true;
        for (int i = 1; i < n; i++){
            if (s[i] > s[i+1]){
                swap (s[i], s[i+1]);
                for (int j = 1; j <=m; j++){
                    swap (v[i][j],v[i+1][j]);
                }
                sortat = false;
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }    
}

