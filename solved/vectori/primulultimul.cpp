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
    for (int i=1 ; i<=(n/2 + n % 2); i++){
        if (n+1-i == i){
            cout << v[i] << " ";
        }else{
            cout << v[i]<<" "<<v[n+1-i]<< " ";
        }
    }

    return 0;
}