#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    int n;
    cin >> n;
    int x = n;
    int u = n % 10;
    bool egale = true;
    while(n != 0) {
        if (n % 10 != u) {
            egale = false;
            break;
        }
        n /= 10;
    }
    n = x;
    if (egale) {
        cout << "egale\n";
        return 0;
    }

    // strict crescatoare => 12569
    bool cresc = true;
    u = n % 10;
    n /= 10;
    while (n != 0) {
        if (n % 10 >= u) {
            cresc = false;
            break;
        }
        u = n % 10;
        n /= 10; 
    }

    n = x;
    if (cresc) {
        cout << "strict crescatoare\n";
        return 0;
    }

    // strict descrescatoare => 8721
    bool desc = true;
    u = n % 10;
    n /= 10;
    while (n != 0) {
        if (n % 10 <= u) {
            desc = false;
            break;
        }
        u = n % 10;
        n /= 10; 
    }

    n = x;
    if (desc) {
        cout << "strict descrescatoare\n";
        return 0;
    }

    cout << "neordonate\n";




    
   
    return 0;
}