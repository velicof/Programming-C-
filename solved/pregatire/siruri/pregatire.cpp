#include <bits/stdc++.h>
#include <cstring>
#include <fstream>

using namespace std;

// ifstream fin("comori.in");
// ofstream fout("comori.out");
// #define cin fin
// #define cout fout



int main()
{
    char s[105];

    // La sfarsitul fiecarui sir de caractere se afla caracterul \0 adica NULL
    // alex\0

    // citire cand s nu are spatii
    // cin >> s;

    // citire cand s are spatii
    cin.get(s, 105);

    // Dimensiunea sirului meu
    int n = strlen(s);
    cout << n << '\n';

    cout << s << '\n';


    return 0;
}