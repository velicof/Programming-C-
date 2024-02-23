#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("pozmax.in");
ofstream fout("pozmax.out");

#define cin fin 
#define cout fout

int main (){
    
    int i,n,poz=0;
    float x, max = -1e9;

    cin >> n;
    int f = -1, l = -1;
    for (i=1;i<=n;i++){
        cin >> x;
        if (x == max) {
            l = i;
        }
        if (x > max){
            max = x;
            f = i;
            l = i;
        }

    }

    cout << f << " " << l << '\n';
    
  
    return 0;
}