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
    int nr = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
            if(v[i][j] > v[i+1][j] && v[i][j] > v[i][j+1] && v[i][j] > v[i-1][j] && v[i][j] > v[i][j-1]){
                nr++;
            }
        }
    }
    cout << nr;
    return 0;
    }


 