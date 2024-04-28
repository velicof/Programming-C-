#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,x[1005],y[1005],S=0;


    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x[i];
        S = S + x[i];
    }
    for (int i = 1; i <= n; i++){
        y[i] = S - x[i];
        cout << y[i] << " ";
    }
    
    return 0;
}