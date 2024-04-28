#include <bits/stdc++.h>
using namespace std;



int main() {

    int n,max = -1e9, min = 1e9, v[1005];

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (int i = 1; i <= n; ++i) {
        if (v[i] > max) {
            max = v[i];
        }
        if (v[i] < min) {
            min = v[i];
        }
    }

    int dif = max - min;
    int nr = 0;
    for (int i = 1; i <= n; ++i) {
        if (v[i] == dif) {
            ++nr;
        }
    }

    cout << nr << '\n';



    return 0;
}