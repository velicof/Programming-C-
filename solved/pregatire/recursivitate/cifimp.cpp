#include <bits/stdc++.h>

using namespace std;
ifstream fin("secvsummax.in");
ofstream fout("secvsummax.out");

// #define cin fin
// #define cout fout

const int maxn = 1e6 + 5;

// Calculeaza numarul de cifre impare ale unui numar
int cifImp(int n) {
    if (n <= 9) {
        if (n % 2 == 1) return 1;
        return 0;
    }
    if (n % 10 % 2 == 1) {
        return 1 + cifImp(n / 10);
    }

    return cifImp(n / 10);
}

// cifImp(n) = ULTIMA_CIF + cifImp(n / 10) 

int main()
{
    int n, v[105];
    cin >> n;

    cout << cifImp(n) << '\n';


    // for (int i = 1; i <= n; ++i) {
    //     cin >> v[i];
    // }
    // int x, y;
    // cin >> x >> y;
    // cout << sumV(v, x, y) << '\n';



    
    return 0;
}
