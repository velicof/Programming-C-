#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){

  long long n,x,min = 1e9, max = -1e9;

  cin >> n;

  for(int i = 1; i <=n; i++){
    cin >> x;
    if (x<min){
        min = x;
    }
    if (x>max){
        max = x;
    }
  }
  while (min != 0 && max != 0){
    if (min >= max){
        min %=max;
    }else{
        max%=min;
    }
  }
  if (min == 0){
    cout << max << endl;
  }else { cout << min;
  }

return 0;
}