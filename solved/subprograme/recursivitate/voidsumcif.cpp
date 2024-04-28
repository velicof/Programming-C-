#include <bits/stdc++.h>
using namespace std;

void sumcif(long long n, int& S) {
    if (n == 0){
       S = 0;
    }else{
       
        sumcif(n / 10, S); 
        
        int u = n % 10;
        S = S + u;
    }
         
}
int main (){
    int n,S = 0;
    cin >> n;
    sumcif(n, S);
    cout <<"sumatotala="<<S;
}