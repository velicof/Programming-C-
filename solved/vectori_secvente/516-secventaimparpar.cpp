#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int n,v[1005],sp,fp,S=0;

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++){
        if (v[i] % 2 == 1){
            sp = i;
            break;
        }
    }
    for (int i = n; i >=1; i--){
        if (v[i] % 2 ==1){
            fp = i;
            break;
        }
    }
    for(int i = sp; i <= fp; i++){
        S = S + v[i];
    }
    cout << S;
    return 0;
}


