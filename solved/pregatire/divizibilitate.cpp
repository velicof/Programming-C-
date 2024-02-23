#include <bits/stdc++.h>
using namespace std;

// ofstream fout("output.out");
// #define cin fin
// #define cout fout

const int maxn = 2e5 + 5;


int main() {

    // Cum testam ca un numar este prim?
    // Suma divizorilor / numarul de divizori
    // Descompunerea in factori primi
    // Cel mai mare divizor comun / cel mai mic multiplu comun



    // 1) Cum testam ca un numar este prim??????

    // Metoda 1 (Verificam tot, cea mai ineficienta)

    // int n;
    // cin >> n;
    // bool ok = true;
    // if (n <= 1) {
    //     ok = false;
    // }
    // for (int i = 2; i < n; ++i) {
    //     if (n % i == 0) {
    //         ok = false;
    //         break;
    //     }
    // }

    // if (ok) {
    //     cout << "DA\n";
    // }
    // else {
    //     cout << "NU\n";
    // }


    // Medtoda 2: Verificam pana la jumatatea numarului

    // int n;
    // cin >> n;
    // bool ok = true;
    // if (n <= 1) {
    //     ok = false;
    // }
    // for (int i = 2; i <= n / 2; ++i) {
    //     if (n % i == 0) {
    //         ok = false;
    //         break;
    //     }
    // }

    // if (ok) {
    //     cout << "DA\n";
    // }
    // else {
    //     cout << "NU\n";
    // }

    // Metoda 3: Tinem cont ca divizorii vin in perechi de cate 2,
    // (x, y), x <= y si x * y = n. Are sens sa verificam doar pana la
    // sqrt(n)

    // int n;
    // cin >> n;
    // bool ok = true;
    // if (n <= 1) {
    //     ok = false;
    // }
    // for (int i = 2; i * i <= n; ++i) {
    //     if (n % i == 0) {
    //         ok = false;
    //         break;
    //     }
    // }

    // if (ok) {
    //     cout << "DA\n";
    // }
    // else {
    //     cout << "NU\n";
    // }






    // 2 - Suma divizorilor unui numar
    // int n;
    // cin >> n;
    // long long sum = 0;
    // for (int i = 1; i * i <= n; ++i) {
    //     if (n % i == 0) {
    //         sum += i;
    //         if (n / i != i) {
    //             sum += n / i;
    //         }
    //     }
    // }


    // 3 - Descompunerea in factori primi:

    // int n;
    // cin >> n;
    // int d = 2;
    // while (n != 1) {
    //     if (n % d == 0) {
    //         int p = 0;
    //         while (n % d == 0) {
    //             n /= d;
    //             ++p;
    //         }
    //         cout << d << "^" << p << " * ";
    //     }
    //     if (d == 2) d = 3;
    //     else d += 2;
    //     if (d * d > n) {
    //         d = n;
    //     }
    // }

    



    // 4 - Cel mai mare divizor comun
    // Numere prime intre ele => gcd(a, b) = 1

    // int a, b;
    // cin >> a >> b;
    // while (a != 0 && b != 0) {
    //     if (a >= b) {
    //         a %= b;
    //     }
    //     else {
    //         b %= a;
    //     }
    // }

    // if (a == 0) cout << b << '\n';
    // else cout << a << '\n';

    int a, b;
    cin >> a >> b;int 
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }

    cout << a << '\n';






    return 0;
}
