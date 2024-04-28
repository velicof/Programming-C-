#include <bits/stdc++.h>

using namespace std;
ifstream fin("secvsummax.in");
ofstream fout("secvsummax.out");

// #define cin fin
// #define cout fout

bool visited[105][105];

void cautare (int v[105][105], int x, int y, int n, int m){
    if (x < 1 || x > n || y < 1 || y > m) {
        return;
    }
    if (v[x][y] == 1) {
        return;
    }
    if (visited[x][y] == true) {
        return;
    }
    visited[x][y] = true;
    cautare(v, x, y - 1, n, m);
    cautare(v, x, y + 1, n, m);
    cautare(v, x - 1, y, n, m);
    cautare(v, x + 1, y, n, m);
}


int main(){
   
    int n, m,v[105][105],is,js,ib,jb;
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> v[i][j];
        }
    }
    cin >> is >> js >> ib >> jb;

    cautare(v, is, js, n, m);
    if (visited[ib][jb] == true) {
        cout << "DA\n";
    }
    else {
        cout << "NU\n";
    }

    return 0;
}