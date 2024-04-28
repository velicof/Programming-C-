#include <bits/stdc++.h>
using namespace std;

void sumcif(int n) {
    int S = 0
    if (n <= 9){
        S = n
    }

        int u = n % 10;
        S = u + sumcif (n / 10);
        

   
}
int main (){
    int n;
    cin >> n;
    cout << sumcif(n);
}