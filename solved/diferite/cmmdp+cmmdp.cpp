#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
long long n, min1=1e9, max2=-1e9;

cin >> n;

for (int i = 2; i*i <= n ; i ++){
    if (n % i == 0 && min1 > i){
        min1 = i;
        if (n / i != i && max2 < n/i){
            max2 = (n / i);
        }
    }
}
cout <<min1+max2;
return 0;
}