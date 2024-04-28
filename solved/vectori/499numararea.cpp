#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,v[1005];


    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    int nr = 0;
    for (int i = 1; i<n; i++){
        for ( int j=i+1;j<=n;j++){
        int x=v[i];
        int y=v[j];
        int S1=0,S2=0;
        while (x!=0){
            S1 = S1 + (x % 10);
            x/=10;
        }
        while (y != 0){
            S2 = S2 + (y % 10);
            y/=10;
        }
        if (S1 == S2){
            nr++;
        }
        }
    }

    cout << nr;
    return 0;
}