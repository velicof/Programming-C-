#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

#define cin fin 
#define cout fout

int main (){

    int n,i,x, maxp=-1e9, ap =0;
    cin >>n;
    for (i=1;i<=n;i++){
        cin >>x;
        if (maxp<x && x%2==0){
            maxp=x;
            ap = 1;
        }
        else if ( maxp == x){
            ++ap;
        }
    }
    if (maxp == -1e9){
        cout <<"-1";
    }else
    {
        cout << maxp << ' ' << ap;
    }
return 0;
}