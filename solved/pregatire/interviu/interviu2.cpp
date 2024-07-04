#include <iostream>
#include <string.h>
using namespace std;

// Se da un numar cu maxim 9 cifre nenule. Dorim sa rearanjam cifrele acestui numar incat sa 
// obtinem un palindrom si sa fie cat mai mic posibil. Daca nu se pot rearanja cifrele
// incat sa obtinem un palindrom, afisam "NU EXISTA".
// 211
// 121


int have[300];

int main(){
    
    int n,u,aj[300];
    cin >> n;

    while ( n != 0){
        u = n % 10;
        ++have[u];
        n /= 10;
    }
    int k = 0, nr = 0;
    for(int i = 1; i <= 9; i++){
        if(have[i] % 2 != 0) {
            ++k;
            nr = i;
        }
    }

    if (k > 1) {
        cout << "NU EXISTA\n";
        return 0;
    }

    // 11145568 nr 86554111
    int res = 0;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= have[i] / 2; ++j) {
            res = res * 10 + i;
        }
    }
    if (k == 1) {
        res = res * 10 + nr;
    }
    for (int i = 9; i >= 1; --i) {
        for (int j = 1; j <= have[i] / 2; ++j) {
            res = res * 10 + i;
        }
    }

    cout << res << '\n';
    

    return 0;
}
