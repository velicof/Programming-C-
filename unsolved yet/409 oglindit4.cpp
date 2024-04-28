#include <iostream>
using namespace std;
int main() {

    int n, nrp = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        int ogl = 0, aux = x;
        while (x) {
            ogl = ogl * 10 + x % 10;
            x /= 10;
        }
        x = aux;

        int a = x, b = ogl, d;

        while (a != 0 && b !=0){
            if(a>=b){
                a = a % b;
            }else{
                b = b % a;
            }
        }
        if (a == 0){
            d = b;
        }else{
            d = a;
        }
        if (d <= 1){
            nrp++;
        }

    }

    cout << nrp << '\n';



    return 0;
}