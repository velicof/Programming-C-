#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("parimpar2.in");
ofstream fout("parimpar2.out");

#define cin fin 
#define cout fout

int main (){
    
    int par, imp,pozp = 0,pozi = 0;
    cin >> imp >> par;
    int x;
    int r1 = -1, r2 = -1;
    while (cin >> x) {
        // procesezi numarul
        if ( x % 2 == 0){
            pozp++;
            if (pozp == par) {
                r1 = x;
            }
        }  
        if ( x % 2 !=0){
            pozi++;
            if (pozi == imp) {
                r2 = x;
            }
        }
    }

    if (r1 < 0 || r2 < 0) {
        cout << "Nu Exista\n";
    }
    else {
        cout << r1 << " " << r2 << '\n';
    }
    
  
    return 0;
}