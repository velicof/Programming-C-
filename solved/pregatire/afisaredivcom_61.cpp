#include <bits/stdc++.h>
using namespace std;

// ofstream fout("output.out");
// #define cin fin
// #define cout fout

const int maxn = 2e5 + 5;


int main() {

    int a,b;
    

    cin >> a >> b;

    for (int i= 1 ; i*i <=a; i++ ){
        if (a % i == 0){
            if (b % i == 0){
                cout << i << " ";
            }
        }
    }

    int r = sqrt(a);
    for (int i = r; i >= 1; --i) {
        if (a % i == 0) {
            if (a / i != i && b % (a / i) == 0) {
                cout << a / i << " ";
            }
        }
    }

    



    return 0;
}
