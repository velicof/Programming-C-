#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){

    long long a,b,x,d,aa,bb;

    cin >>a >> b;
    aa = a;
    bb = b;

    while (a != 0 && b != 0){
        if (a >=b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    if (a == 0){
        d = b;
    }else{
        d = a;
    }
    cout << (aa * bb)/d;
    

return 0;
}