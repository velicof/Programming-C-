#include <iostream>
using namespace std;

int main() {
    int n,v[1005];

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for ( int i = 1; i <= n; i++){
        int max = v[i];
        int pos = i;
        for (int j = i+1; j <= n; j++){
            if (v[j] > max){
                max = v[j];
                pos = j;
            }
        }
    swap(v[i],v[pos]);
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }
    return 0;
}