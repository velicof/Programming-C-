#include <bits/stdc++.h>

using namespace std;
ifstream fin("livada_xi.in");
ofstream fout("livada_xi.out");

// #define cin fin
// #define cout fout

int cmmdc(int a, int b){
    if (!b) {
        return a;
    }
    return cmmdc(b, a % b);
}
int suma_sim(int v[], int st, int dr){
    if (st > dr){
        return 0;
    }
    if (st == dr){
        if (v[st] != 1) return 0;
        else return v[st];
    }
    if (cmmdc(v[st], v[dr]) == 1){
        return v[st] + v[dr] + suma_sim(v, st + 1, dr - 1);
    }
    return suma_sim(v, st + 1, dr - 1);

}


int main()
{
    int n, v[1005];
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    cout << suma_sim(v, 1, n) << '\n';

    // for (int i = 1; i <= n; i++){
    //     cout << v[i] << " ";
    // }
}
