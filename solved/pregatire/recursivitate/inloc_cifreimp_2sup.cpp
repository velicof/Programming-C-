#include <bits/stdc++.h>

using namespace std;
ifstream fin("livada_xi.in");
ofstream fout("livada_xi.out");

// #define cin fin
// #define cout fout

int cifre_impare(int x) {
    if (x <= 9){
        if ( x % 2 == 1){
            return x;
        }return 0;
    }
    int u = x % 10;
    int y = cifre_impare(x / 10);
    if (u % 2 == 1){
        y = y * 10 + u;
    }
    return y;

}

void inloc (int v[], int st, int dr){
    if (st > dr){
        return;
    }
    if ( st == dr){
        v[st] = cifre_impare(v[st]);
        return;
    }
    v[st] = cifre_impare(v[st]);
    inloc (v, st+1, dr);
}


int main()
{
    int n, v[1005];
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    inloc(v, 1, n);

    for (int i = n; i >= 1; --i) {
        cout << v[i] << " ";
    }
}