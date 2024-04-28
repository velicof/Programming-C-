#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    long long m,n,copieM;
    int u,u1;
    bool comun = false;
    
    cin >>n >> m;
    copieM=m;
    while (n!=0){
        u = n % 10;
        m=copieM;
        while (m != 0){
            u1 = m % 10;
            if (u1 == u){
                comun = true;
            }
            m = m / 10;
        }
        n = n / 10;
    }
    if ( comun == true){
        cout << "DA";
    }else{
        cout <<"NU";
    }
   
return 0;
}