#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,v[105][105];
    cin >> n >> m; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        bool sortat = false;
        while (!sortat){
            sortat = true;
            for (int j = 1; j <m; j++){                
                if (v[i][j] > v[i][j+1]){
                    swap (v[i][j],v[i][j+1]);
                    sortat = false;
                }
        
             }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cout << v[i][j] << " ";
        }
        cout <<"\n" ;
    }
    return 0;

    }


