#include <bits/stdc++.h>
using namespace std;

ifstream fin("sortcif.in");
ofstream fout("sortcif.out");

#define cin fin
#define cout fout

int main() {
    int n,v[1005];

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }      
    int nrs[1005];
    for ( int i = 1; i <= n; i++){
        int S = 0;
        int aux=v[i];
        while (aux != 0){
            S = S + (aux % 10);
            aux /= 10;
        }
         nrs[i] = S;
    }
    bool sortat = false;
   while (sortat == false){
        sortat = true;
        for ( int i = 1; i <n; i++){
            if (nrs[i] > nrs[i+1]){
                swap(v[i],v[i+1]);
                swap(nrs[i],nrs[i+1]);
                sortat = false;
            }
        }
   }
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }
    return 0;
}