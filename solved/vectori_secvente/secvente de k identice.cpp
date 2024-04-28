#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k,v[1005];
    cin >> n >> k; 
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    for (int i = 1; i <= n-k+1; i++){
        for(int j = i + 1; j <= n-k+1; j++){
            bool identic = true;
            for (int l = 0; l < k; l++){
                if(v[i+l] != v[j + l]){
                    identic = false;
                    break;
            }
        }
        if(identic){
            cout << i << " " << j;   
            return 0;    
        }
    }
    
    }
    cout << "NU";
}