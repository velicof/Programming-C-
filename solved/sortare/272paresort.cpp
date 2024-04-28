#include <bits/stdc++.h>
using namespace std;

ifstream fin("paresort.in");
ofstream fout("paresort.out");

#define cin fin
#define cout fout

int main() {
    int n,v[1005],j = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }      
    int nrs[1005];
    for ( int i = 1; i <= n; i++){
        if (v[i] % 2 == 0){
            nrs[j] = v[i];
            j++;
        }
       
    }
    bool sortat = false;
   while (sortat == false){
        sortat = true;
        for ( int i = 0; i <j-1; i++){
            if (nrs[i] > nrs[i+1]){
                swap(nrs[i],nrs[i+1]);
                sortat = false;
            }
        }
   }
   if ( j == 0 ){
    cout << "nu exista";
   }else{
        cout << j << endl;
        for(int i = 0; i <j ; i++){
            cout << nrs[i] << " ";
        }
   }
    return 0;
}