#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
  long long n,u,nrp=0,nri=0,nrpi=0,nrii=0;
  
  cin >> n;
  int p1 = 1, p2 = 1;
  while ( n > 0){
      u = n % 10;
      if ( u % 2 == 0){
          nrp = u * p1 + nrp;
          p1 *= 10;
      }else {
          nri = u * p2 + nri;
          p2 *= 10;
      }
      n = n / 10;
  }

  cout << abs(nrp-nri);
  
return 0;
}