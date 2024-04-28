#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,v[1005];
    int nrd[1005];

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    
    for (int i = 1; i <= n; i++){
        int sum = 0;
        for (int k = 1; k*k <= v[i]; k ++){
            if (v[i] % k == 0){
                sum += k;
                if (v[i] / k != k){
                    sum += v[i] / k;
                }

            }
        }
        nrd [i] = sum;
    }
    bool sortat = false;
    while (!sortat){
        sortat = true;
        for (int i = 1; i <= n-1; i++){
            if (nrd[i] > nrd[i+1] || (nrd[i] == nrd[i+1] && v[i] > v[i+1])){
                swap (nrd[i],nrd[i+1]);
                swap (v[i],v[i+1]);
                sortat = false;
            }
        }
    }
    for (int i = 1; i <= n; i ++){
        cout << v[i] << " ";
    }
    return 0;
}