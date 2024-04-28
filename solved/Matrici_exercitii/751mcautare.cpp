#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,v[105][105],x[1005],k;
    cin >> n >> m; 

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++){
        cin >> v[i][j];
        }
    }
    cin >> k;
    for (int l = 1; l <= k; l++){
        cin >> x[l];
    }
    
    for (int l = 1; l <= k; l++){
        bool ok = true;   
        for (int i = 1; i <= n; i++) {  
            bool g = false;
        
        for (int j = 1; j <=m; j++){
           
            if (x[l] == v[i][j]){
                g = true;
                break;
            }
           }
           if(g == false){
                ok = false;
           }
        }
        if (ok){
            cout << "DA\n";
        }else{
            cout <<"NU\n";
        }
    }
    
    return 0;

    }


