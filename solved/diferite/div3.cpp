#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main (){
    
    int n,nr=0;
    cin >> n;

    int p = 1;
    int x = n;
    while (n) {
        int f = n / 10;
        int s = x - n * p;
        int val = f * p + s;
        if (val % 3 == 0) {
            ++nr;
        }
        p *= 10;
        n /= 10;
    }

    cout << nr << '\n';
  
   
    return 0;
}

// abcdef
// Cum il stergem pe c ?????
// abdef

// abc 

// ab = abc / 10 
// def = abcdef - abc000

// f = ab
// s = def 

// ab000 + def 

// abdef 
