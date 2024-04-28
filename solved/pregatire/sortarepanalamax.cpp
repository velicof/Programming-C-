#include <bits/stdc++.h>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

// #define cin fin
// #define cout fout

int main() {

   int n, v[1005];
   cin >> n;
   for (int i = 1; i <= n; i++){
        cin >> v[i];
   }
   int max = -1e9,pos;
   for (int i = 1; i <= n; i++){
        if (v[i] > max){
            max = v[i];
            pos = i;
        }
   }
   bool sortat = false;
   while ( sortat == false){
        sortat = true;  
        for (int i = 1; i < pos ; i++){
            if (v[i] > v[i + 1]){
                swap (v[i],v[i+1]);
                sortat = false;
            }

        }    
    }
    sortat = false;
    while ( sortat == false){
        sortat = true;  
        for (int i = pos; i < n ; i++){
            if (v[i] < v[i + 1]){
                swap (v[i],v[i+1]);
                sortat = false;
            }

        }    
    }
    for (int i = 1; i <= n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

