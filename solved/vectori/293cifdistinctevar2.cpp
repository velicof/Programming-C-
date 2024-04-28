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
        int ap[10] = {0}; // ap[x] = De cate ori apare cifra x in numarul meu
        int x = v[i];
        while (x != 0){
            ++ap[x % 10];
            x /= 10;
        }
        bool ok = true;
        for (int j = 0; j <= 9; ++j) {a
            if (ap[j] > 1) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "NU\n";
            return 0;
        }
    }

    cout << "DA\n";
    

    return 0;
}
