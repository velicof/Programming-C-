#include <bits/stdc++.h>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

#define cin fin
#define cout fout

int main() {

   int n, v[1005];

   cin >> n;
   for (int i = 1; i <= n; i ++){
        cin >> v[i];
   }
   int nrd[1005];
   for (int i =1; i <= n; i++){
        int nr =0;
        for (int j = 1; j*j <= v[i]; j++){
            if (v[i] % j == 0){
                nr++;
                if (v[i] / j != j){
                    nr++;
                }
            }
            
            nrd[i] = nr;  
    }
   }
   bool sortat = false;
   while (sortat == false){
        sortat = true;
        for (int i = 1 ; i < n; i++){
            if (nrd[i] == nrd[i + 1] && v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                sortat = false;
            }
            if (nrd[i] < nrd[i + 1]) {
                swap(v[i], v[i + 1]);
                swap(nrd[i], nrd[i + 1]);
                sortat = false;
            } 
        }
   }

   for (int i = 1; i <= n; ++i) {
    cout << v[i] << " ";
   }


    return 0;
}


// varianta mai rapida cu descumpunerea in factori primi

#include <bits/stdc++.h>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

#define cin fin
#define cout fout

int main() {

   int n, v[1005];

   cin >> n;
   for (int i = 1; i <= n; i ++){
        cin >> v[i];
   }
   int nrd[1005];
   for (int i =1; i <= n; i++){
        int nr = 1;
        int x = v[i], d = 2;
        while (x != 1) {
            if (x % d == 0) {
                int p = 0;
                while (x % d == 0) {
                    ++p;
                    x /= d;
                }
                nr *= (p + 1);
            }
            if (d == 2) d = 3;
            else d += 2;
            if (d * d > x) d = x;
        }
        nrd[i] = nr;
   }
   bool sortat = false;
   while (sortat == false){
        sortat = true;
        for (int i = 1 ; i < n; i++){
            if (nrd[i] == nrd[i + 1] && v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                sortat = false;
            }
            if (nrd[i] < nrd[i + 1]) {
                swap(v[i], v[i + 1]);
                swap(nrd[i], nrd[i + 1]);
                sortat = false;
            } 
        }
   }

   for (int i = 1; i <= n; ++i) {
    cout << v[i] << " ";
   }


    return 0;
}

