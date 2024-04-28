#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n,v[1005][1005];
    cin >> n; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
        cin >> v[i][j];
        }
    }
    int S1 = 0, S2 = 0;
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
            if (i < j){
               S1 += v[i][j];                
            }
            if (i > j){
                S2 += v[i][j];
            }
        }
    }
    while ( S1 != 0 && S2 != 0){
        if (S1 > S2){
            S1 = S1 % S2;
        }else{
            S2 = S2 % S1;
        }
    }
    if (S1 == 0){
        cout << S2;
    }else{
        cout << S1;
    }

    
    return 0;
    }


 