#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,v[1005];


    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    int S=0;
    for (int i = 1; i<=n; i++){
        S = S + v[i];
    }
    int nr = 0;
    for (int i = 1; i <= n; i++){
        if (v[i] > S / n){
            nr++;
        }
    }
    cout << nr;
    return 0;
}