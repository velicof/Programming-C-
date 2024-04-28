#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
long long a,b,d;

cin >> a >> b;

while (a != 0 && b !=0){
    if(a>=b){
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
for ( int i =1; i <= d; i++){
    if (d % i == 0){
        cout << i << " ";
    }
}

return 0;
}