#include <bits/stdc++.h>
using namespace std;


int main() {

    int n,v[105][105],nr = 0;

    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> v[i][j];
        }
    }

    
    
    for (int i = 1; i <= n; i++){
        int S1 = 0;
        for (int j = 1; j <= n; j++){
            S1 = S1 + v[i][j];
        }
        for (int j = 1; j <= n; j++){
            int S2 = 0;
            for(int i = 1; i <= n; i++){
                S2 += v[i][j];
            }
            if (S1 == S2){
                nr++;
            }

        }
        
    }
    cout << nr;

    

    return 0;
}