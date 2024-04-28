#include <bits/stdc++.h>
using namespace std;

double factorial (int x){
    double p = 1;
    for (int i = 1; i <= x; i++){
        p *= i;
    }
    return p;
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n);
}


 