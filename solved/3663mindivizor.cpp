#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
long long n, min1=1e9, min2=1e9;

cin >> n;

for (int i = 2; i*i <= n ; i ++){
    if (n % i == 0 && min1 > i){
        min1 = i;
        if (n / i != i && min2 > n/i){
            min2 = (n / i);
        }
    }
}
if ( min1 <= min2 ){
    cout << min1*min1;
}else {
    cout << min2*min2;
}
return 0;
}