#include <bits/stdc++.h>
using namespace std;
ifstream fin("matrice6.in");
ofstream fout("matrice6.out");

#define cin fin
#define cout fout

int main() {
    long long n,v[105][105];
    cin >> n; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
        cin >> v[i][j];
        }
    }
      int max = -1e9, min = 1e9;
      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
            if (v[i][j] > max){
                max = v[i][j];
            }
            if (v[i][j] < min){
                min = v[i][j];
            }
        }
       }
    for (int i = 1; i <= n; i++) {
        bool ok = false;
        for (int j = 1; j <=n; j++){
            if(v[i][j] == max){
                ok = true;
                break;
            }
        }
        if (ok){
            for (int j = 1; j <=n; j++){
                v[i][j] = v[i][j] + min;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
        cout << v[i][j] << " ";
        }
        cout << endl;
    }
  
    return 0;
    }


 