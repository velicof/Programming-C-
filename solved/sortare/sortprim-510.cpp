#include <iostream>
using namespace std;

int main() {
    int n,v[1005],k;

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    bool sortat = false;
    while (!sortat){
        sortat = true;
        for(int i = 1; i < k; i++){
            if(v[i]>v[i+1]){
                swap (v[i],v[i+1]);
                sortat = false;
            }
        }
    }
    bool sortat = false;
    while (!sortat){
        sortat = true;
        for(int i = k; i < n; i++){
            if(v[i]<v[i+1]){
                swap (v[i],v[i+1]);
                sortat = false;
            }
        }
    }
     for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
     }
    return 0;
}