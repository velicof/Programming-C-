#include <bits/stdc++.h>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

// #define cin fin
// #define cout fout

int main() {

   int n, v[100005],t,k,l =0,nrs = 0;
   cin >> n >> t >> k;
   for (int i = 1; i <= n; i++){
        cin >> v[i];
   }
    for (int i = 1; i <= n - k + 1; i++){
        bool ok = true;
        // [i, i + k - 1]
        for (int j = i; j <= i + k - 1; ++j) {
            if (v[j] > t) {
                ok = false;
                break;
            }
        }
        nrs += ok;
    }
    cout << nrs;

    return 0;
}

