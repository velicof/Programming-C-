// Un joc folosește o tablă dreptunghiulară, pe care sunt reprezentate celule de dimensiune egală, dispuse
// pe m linii și pe n coloane. În fiecare celulă este înscris un număr natural.
// Numim pătrat de valoare p patru celule ale tablei, situate pe două linii consecutive și pe două coloane
// consecutive, cu proprietatea că suma valorilor înscrise în aceste celule este egală cu p. Scopul jocului
// este determinarea unui pătrat de valoare maximă.
// Scrieți un program C/C++ care citește de la tastatură două numere naturale din intervalul
// [2,20], m și n, apoi elementele unui tablou bidimensional cu m linii și n coloane, numere
// naturale din intervalul [0,104], reprezentând numerele înscrise pe tabla de joc, în
// ordinea dispunerii celulelor corespunzătoare. Programul determină un pătrat de valoare
// maximă al tablei și afișează pe ecran această valoare.
// 1 1 2 30
// 3 10 1 2
// 1 13 12 1
// 1 2 3 1
// 7 1 20 1
// Exemplu: pentru m=5, n=4 și tabloul alăturat, se afișează pe ecran valoarea 36, corespunzătoare
// pătratului evidențiat în figură

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {

    int n,m,a[105][105];

    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int S = 0;
    int max = -1;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m-1; j++){
            S = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
            if (max < S){
                max = S;
            }
        }
    }
    cout << max;
    return 0;
}

