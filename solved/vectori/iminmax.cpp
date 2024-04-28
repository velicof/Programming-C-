#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,v[1005],maxv=-1,minv=1e9,imax=0,imin=0;

    cin >> n;

    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    for (int i =1; i <= n; i++){
        if (maxv < v[i]){
            maxv = v[i];
            imax = i;
        }
        if (minv > v[i]){
            minv = v[i];
            imin =i;
        }
    }
    cout << imin <<" "<< imax;
   
    return 0;
}