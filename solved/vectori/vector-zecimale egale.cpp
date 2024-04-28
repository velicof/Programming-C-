#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,a[1005],x,y;;


    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    int nr = 0;
    for (int i = 1; i<=n/2;i++){  
         x = (a[i] % 100) / 10;
         y = (a[n-i+1] % 100) / 10;
         if (x == y){
            nr++;
         }
        }      
    cout << nr;  

    return 0;
}