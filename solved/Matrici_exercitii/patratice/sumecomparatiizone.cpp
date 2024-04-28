#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,v[105][105];
    cin >> n; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
        cin >> v[i][j];
        }
    }
    int S1 = 0, S2 = 0, S3 = 0, S4 = 0;
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
            if (i < j && i+j < n + 1){
                S1 += v[i][j];
            }
            if (i < j && i+j > n + 1){
                S2 += v[i][j];
            }
            if (i > j && i+j > n + 1){
                S3 += v[i][j];
            }
            if (i > j && i+j < n+1){
                S4 += v[i][j];
            }
        
        }
    }
    int sume[4] = {S1,S2,S3,S4};
    bool sortat = false;
    while (!sortat){
        sortat = true;
        for(int i = 0; i < 3; i++){
            if (sume[i] > sume[i+1]){
                swap(sume[i],sume[i+1]);
                sortat = false;
            }
        }
    }
    for (int i = 0; i < 4; i++){
        cout << sume[i] << " ";
    }

    return 0;
    }


 