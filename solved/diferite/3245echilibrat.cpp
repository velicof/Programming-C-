#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    int a,b,u;
    long long s=0;
    
    cin >> a >> b;
    
    for ( int i=a;i<=b;i++){
        int j=i;
        int nrp=0;
        int nri=0;
        while (j != 0){
            u = j % 10;
            if (u % 2 == 0){
                nrp++;
            }else{
                nri++;
            }
            j = j / 10;
        }
        if (nrp == nri){
            s = s+ i;
     }
    }
    cout << s;
return 0;
}