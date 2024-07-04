// Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate numai din litere mici ale alfabetului
// englez, sunt distincte și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la
// tastatură un număr natural n (n[1,102]), apoi un text de tipul precizat mai sus, și afișează pe ecran
// cuvinte ale acestuia, pe două linii separate, astfel încât prima linie să conțină mulțimea cuvintelor care
// au mai puțin de n litere, iar a doua linie să conțină mulțimea cuvintelor care au mai mult de n litere.
// Cuvintele de pe fiecare linie sunt afișate într-o ordine oarecare, iar dacă una dintre cele două mulțimi
// este vidă, se afișează pe ecran doar mesajul nu exista.
// Exemplu: pentru n=3 și textul era o apa rece si cu gust bun
// se poate afișa pe ecran textul alăturat. (10p.)
// o si cu
// rece gust

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {

    int n;
    char s[105];
    char s1[105];
    char s2[105];
    cin.get(s,105);
    cin >> n;
   
    int len = strlen(s);
    
    char *p = strtok(s, " ,.;!?");
    
    while (p != NULL){
        if (strlen(p) < n){
            strcat(s1,p);
            strcat(s1," ");
        }else if(strlen(p) > n){
            strcat(s2,p);
            strcat(s2," ");
        }           
        p = strtok(NULL, " .!:,");
       
    }
    s1[strlen(s1) - 1] = '\0';
    s2[strlen(s2) - 1] = '\0';
    cout<<s1<<"\n"<<s2;

    return 0;
}

