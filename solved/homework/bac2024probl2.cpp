
// Un șablon este un text în care cuvintele sunt separate prin câte un spațiu și sunt formate fie numai din
// litere mici și mari ale alfabetului englez, fie numai din caractere *, în ultimul caz numindu-se
// cuvinte generice. Lungimea unui cuvânt este egală cu numărul de caractere care îl compun.
// Un computer generează o frază pe baza unui astfel de șablon, prin înlocuirea fiecărui cuvânt generic cu
// unul dintre cuvintele de aceeași lungime, preluat dintr-o listă dată.
// Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[1,100]), și o listă de n
// cuvinte, urmată de un șablon de tipul precizat. Fiecare cuvânt din listă este format din maximum 10 litere
// mici și mari ale alfabetului englez și la citire este introdus singur pe linie. Șablonul conține maximum 100 de
// caractere. Programul obține în memorie și apoi afișează pe ecran una dintre frazele care pot fi generate pe
// baza șablonului și a listei citite sau mesajul imposibil dacă nu se poate genera o astfel de frază.
//  Exemplu: dacă n=6, iar lista de cuvinte este cea alăturată,
// pentru șablonul Era o vreme ******* si ***** din belsug *****
// se generează fraza Era o vreme placuta si soare din belsug soare
// sau fraza Era o vreme calduta si soare din belsug acasa
// etc., iar pentru șablonul *** o vreme ******* si ************
// se afișează mesajul imposibil 


#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {

    int n,v[105];
    char s[105];
    char cuv[105][20];
    cin >> n;
    for (int i = 1; i <= n; i++){       
        cin >> cuv[i];
    }
    cin.get();

    cin.get(s,105);
    char res[105];
    int len = strlen(s);
    char *p = strtok(s, " ,.;!?");
    bool first = true;
    while (p != NULL){
        if (p[0] == '*') {
            int sz = strlen(p);
            bool found = false;
            for (int i = 1; i <= n; ++i) {
                if (strlen(cuv[i]) == sz) {
                    found = true;
                    if (!first) strcat(res, " ");
                    strcat(res, cuv[i]);
                    first = false;
                    break;
                }
            }
            if (!found) {
                cout << "imposibil";
                return 0;
            }
        } else {
            if (!first) strcat(res, " ");
            strcat(res, p);
            first = false;
        }

        p = strtok(NULL, " .!:,");
       
    }

    cout << res << '\n';

   
    
    

    return 0;
}

