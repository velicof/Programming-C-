#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,v[205][205],Z;
    cin >> n >> Z; 

    // n = m -> avem numarul de linii egal cu cel de coloane
    // Diagonala principala si secundara
    // principala -> i == j
    // deasupra diagonalei principala -> i < j
    // sub diag principala i > j
    // secundara -> i + j == n + 1
    // deasupra diag secundare -> i + j < n + 1
    // sub diag secundara -> i + j > n + 1

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=n ; j++){
            cin >> v[i][j];
        }
    }
     int S = 0;
     for (int i = 1; i <= n; i++){      
        for (int j = 1; j <=n ; j++){
            if(Z == 1){
                if( i < j && i + j < n + 1){
                    S += v[i][j];
                }
            }
            if (Z == 2){
                if (i < j && i + j > n + 1){
                    S += v[i][j];
                }
            }
            if (Z == 3){
                if (i > j && i + j > n + 1){
                    S += v[i][j];
                }
            }
            if (Z == 4){
                if (i > j && i + j < n + 1){
                    S += v[i][j];
                }
            }
        }

    }
    cout << S ;
return 0;
}


