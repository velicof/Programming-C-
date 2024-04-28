#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
   
    long long n,nr=0,S=0;

    cin >> n;
    double m;
   
    for ( long long i=1; i*i<=n;i++){
        if (n % i == 0 ){
            S+=i;
            nr++;      
        if (n/i != i){
            S+=n/i;
            nr++;
        }}
    }
    m=(float)S/nr;
    cout << fixed << setprecision(2)<<m << endl;
    
   
return 0;
}