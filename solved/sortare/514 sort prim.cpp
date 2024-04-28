#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,v[1005],j = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }      
    int nrs[1005];
    for ( int i = 1; i <= n; i++){
        int a = v[i],b = v[n];
        while(a != 0 && b != 0){
            if (a >= b){
                a %= b;
            }else{
                b %= a;
            }
        }
        if ((a == 0 && b == 1 ) || (a == 1 && b == 0)){
            nrs[j++] = v[i];    
        }
       
    }
    bool sortat = false;
   while (sortat == false){
        sortat = true;
        for ( int i = 0; i <j-1; i++){
            if (nrs[i] < nrs[i+1]){
                swap(nrs[i],nrs[i+1]);
                sortat = false;
            }
        }
   }
   if ( j == 0 ){
    cout << "nu exista";
   }else{
        for(int i = 0; i <j ; i++){
            cout << nrs[i] << " ";
        }
   }
    return 0;
}