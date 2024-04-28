/*
    Programmer : Alexandru Olteanu
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,v[1005];

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++){
        int cif[15], k = 0;
        while (v[i] != 0){
            ++k;
            cif[k] = v[i] % 10;
            v[i] /= 10;
        }
        bool ok = true;
        for (int j = 1; j <= k; j++){
            for(int t = j+1; t <= k; t++){
                if (cif[j] == cif[t]){
                    ok = false;
                    t = k + 1;
                    i = k + 1;
                }
            }
        }
        if (!ok) {
            cout << "NU\n";
            return 0;a
        }
    }

    cout << "DA\n";
    

    return 0;
}
