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
    for (int i=1; i<=n; i++){
        bool ok = true;
        if (v[i] <= 1){
            ok = false;
        }
        for (int j = 2; j * j <= v[i]; j++){
            if (v[i] % j ==0){
                ok = false;
                break;
            }
        }
        if (ok == true){
            v[i] = 0;
        }
    }
    for (int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }


    return 0;
}