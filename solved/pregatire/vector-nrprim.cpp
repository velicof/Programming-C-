#include <bits/stdc++.h>
using namespace std;



int main() {

    int n,v[1005];

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (int i = n; i >= 1; i--){
        bool ok = true;
        if (v[i] < 2) ok = false;
        for(int j = 2;j*j<= v[i]; j++ ){
            if (v[i] % j == 0) {
                ok = false;
            }
        }

        if (ok == true){
            v[i] = 0;
            break;
        }

    }

    for (int i = 1; i <= n; ++i) {
        cout << v[i] << " ";
    }



    return 0;
}