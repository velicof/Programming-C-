#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


int main (){
    
    long long n,p=1;
    
    cin >> n;
    
    for (int i=2;i<=n;i++){
      
       p *= (2*i-1);
    }
    cout <<p;


return 0;
}