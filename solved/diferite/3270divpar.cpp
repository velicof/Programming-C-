#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
   
    long long n,S=0;

    cin >> n;

      if (n % 2 != 0) {
        cout << 0;
        return 0;
    }

    for ( long long i=1; i*i<=n;i++){
        if (n % i == 0 ){
            if( i%2 == 0 ){
            S+=i;
        }
        if (n/i != i && (n/i) % 2 == 0){
            S+=(n/i);
        }}
    }
    cout << S;
    
   
return 0;
}