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
    for (int i = 1; i<=n;i++){
        for (int j=i+1;j<=n;j++){
            int a = v[i], b = v[j];
            while (a !=0 && b != 0){
            if (a>=b){
                a %= b;
            }else{
                b %= a;
            }
            }
            if (a==1 || b==1){
                nr++;
            }
        }
    }
    cout << nr;
    return 0;
}