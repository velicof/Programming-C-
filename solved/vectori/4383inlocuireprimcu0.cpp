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
    for (int i=n;i>=1;i--){
        bool ok = true;
        if (v[i]<=1){
            ok = false;
        } 

    return 0;
}