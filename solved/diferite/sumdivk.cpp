#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    
    int n,k,x,u,S,sum,aux;
    
    
    cin >> k >> n;
 
    sum=0;
    for (int i=1;i<=n;i++){
        cin >> x;
        aux = x;
        S=0;
        while (x!=0){
            u = x % 10;
            S = S + u;
            x = x / 10;
        }
        if (S % k == 0){
            sum = sum + aux;
        }
    }
    cout << sum;
   
return 0;
}