
// Se consideră un text cu cel mult 100 de caractere, format din cuvinte şi numere, separate
// prin unul sau mai multe spaŃii. Cuvintele sunt formate numai din litere ale alfabetului
// englez. Toate numerele sunt reale, pozitive şi sunt formate numai din parte întreagă sau
// din parte întreagă şi parte fracŃionară, separate prin punctul zecimal (.).
// ScrieŃi un program C/C++ care citeşte de la tastatură textul, pe care îl transformă,
// eliminând din componenŃa sa toate numerele care au parte fracŃionară. Programul afişează
// apoi pe ecran textul obŃinut.
// Exemplu: dacă textul citit este
// Reprezentat cu 4 zecimale PI este 3.1415 si e este 2.7182
// se va afişa pe ecran textul:
// Reprezentat cu 4 zecimale PI este si e este 


#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;


int main() {

   char s[105];
   cin.getline(s, 105);
   int n = strlen (s);

   for (int i = 0; i < n; i++){
        if(s[i] == '.' && s[i-1] >='0' && s[i-1] <= '9' && s[i+1] >= '0' && s[i+1] <= '9'){
            int j = i - 1;
            while (j >= 0 && s[j] >= '0' && s[j] <= '9') {
              --j;
            }
            ++j;
            int t = i + 1;
            while (t >= 0 && s[t] >= '0' && s[t] <= '9'){
              ++t;
            }
            --t;
            strcpy(s + j, s + t + 1);
            i = j - 1;
        }
   }
   cout << s << '\n' ;

    return 0;
}