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
    for (int i = 1; i <= n; i++) {       
        bool sortat = false;
        while(!sortat){
            sortat = true;
            for (int j = 1; j <=n-1; j++){                
                if (v[i][j] > v[i][j + 1]){
                    swap(v[i][j],v[i][j + 1]);
                    sortat = false;
                }        
            }
        }   
    }
    for (int j = 1; j <= n; j++) {       
        bool sortat = false;
        while(!sortat){
            sortat = true;
            for (int i = 1; i <=n-1; i++){               
                if (v[i][j] > v[i+1][j]){
                    swap(v[i][j],v[i+1][j]);
                    sortat = false;
                }        
            }
        }   
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++){
        cout << v[i][j] <<" ";
        }
        cout <<"\n";
    }
    
   
    return 0;
    }


 