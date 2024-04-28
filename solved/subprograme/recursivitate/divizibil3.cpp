#include <bits/stdc++.h>
using namespace std;

int CifDiv3Rec(int n) {
    if (n <= 9){
        if (n % 3== 0) return 1;
        return 0;
    }
    int u = n % 10;
    if (u % 3 == 0){
        return 1 + CifDiv3Rec(n / 10);
    }
    return CifDiv3Rec(n / 10);
    
}
int main (){
    int n;
    cin >> n;
    cout << CifDiv3Rec(n);
}