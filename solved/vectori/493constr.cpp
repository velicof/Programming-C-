#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,x[1005],y[1005],S;


    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++){
        int a=x[i];
        S = 0;
       while (a != 0){
            S = S + a % 10;
            a/=10;
       }
       y[i]= x[i] % S;
    }
    for (int i = 1; i <= n; i++){
        cout << y[i] << " ";
    }
    
    return 0;
}