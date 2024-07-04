#include <iostream>
#include <string.h>
using namespace std;

// O asociatie doreste sa tina b runde de concurs. Fiecare runda trebuie sa 
// contina cate o problema din fiecare dificultate de la 'A' la 'G' : {A, B, C, D, E, F, G}.
// Organizatorii au deja n probleme de prin arhive. Cate probleme mai au nevoie sa 
// creeze incat cele m runde sa se poata desfasura?

// n = 4
// ABBC
// b = 1

// DEFG -> 4 probleme

// b = 2
// DEFG, ACDEFG -> 10


int main(){
    int n,b;
    char s[100];
    cin >> n;
    cin >> s;
    cin >> b;
    int ans = 0;
    char p[100];
    strcpy(p, "ABCDEFG");
    for (int i = 1; i <= b; i++){
        for (int j = 0; j <= 6; ++j) {
            int pos = -1;
            for (int t = 0; t < n; ++t) {
                if (s[t] == p[j]) {
                    pos = t;
                    break;
                }
            }
            if (pos != -1) {
                s[pos] = '#';
            } else {
                ++ans;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}

varianta 2

#include <iostream>
#include <string.h>
using namespace std;

// O asociatie doreste sa tina b runde de concurs. Fiecare runda trebuie sa 
// contina cate o problema din fiecare dificultate de la 'A' la 'G' : {A, B, C, D, E, F, G}.
// Organizatorii au deja n probleme de prin arhive. Cate probleme mai au nevoie sa 
// creeze incat cele m runde sa se poata desfasura?

// n = 4
// ABBC
// b = 1

// DEFG -> 4 probleme

// b = 2
// DEFG, ACDEFG -> 10

int have[300];

int main(){
    int n,b;
    char s[100];
    cin >> n;
    cin >> s;
    cin >> b;
    for (int i = 0; i < n; ++i) {
        ++have[s[i]];
    }

    // have['A'] -> cate probleme de tip A am in arhiva
    int ans = 0;
    char p[100];
    strcpy(p, "ABCDEFG");
    for (int i = 0; i <= 6; ++i) {
        if (have[p[i]] < b) {
            ans += b - have[p[i]];
        }
    }

    cout << ans << '\n';

    return 0;
}
