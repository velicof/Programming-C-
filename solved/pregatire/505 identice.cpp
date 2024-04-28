/*
    Programmer : Alexandru Olteanu
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x[1005],y[1005];
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> y[i];
    }
    bool ok = true;
    for (int i = 1; i <=n; i++){
        bool ok = false;
        for (int j = 1; j <= n; j++){
            if (x[i] == y[j]){
                x[i] = -1;
                y[j] = -1;
                ok = true;
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
