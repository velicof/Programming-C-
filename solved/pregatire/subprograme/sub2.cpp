#include <bits/stdc++.h>

using namespace std;
ifstream fin("mincols1.in");
ofstream fout("mincols1.out");

// #define cin fin
// #define cout fout

bool isPrim(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int i_prim(int n){
    int p1,p2;
    for (int i = n; i >= 1; i--){
        if (isPrim(i)) {
            p1 = i;
            break;
        }
    }
    for (int i = n; i <= 1e9; i++){
       if (isPrim(i)) {
         p2 = i;
         break;
       }
    }
    return p2 - p1;
}


int main(){
   

    
    return 0;
}




