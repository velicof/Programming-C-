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
    long long max = -1e9,min = 1e9;
    int pozmax = 0,pozmin = 0;

    for (int i = 1; i <= n; i++){
        if (max < v[i]){
            max = v[i];
            pozmax = i;
        }
        if (min > v[i]){
            min = v[i];
            pozmin = i;
        }
    }
    if (pozmax > pozmin){
        for (int i = pozmin; i<=pozmax; i++){
            cout << v[i] <<" ";
        }
    }else{
        for (int i = pozmax; i<= pozmin; i++){
            cout << v[i] <<" ";
        }
    }
   
    return 0;
}