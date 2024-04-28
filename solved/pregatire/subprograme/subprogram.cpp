#include <bits/stdc++.h>

using namespace std;
ifstream fin("mincols1.in");
ofstream fout("mincols1.out");

// #define cin fin
// #define cout fout

int Egal( int n){
    int v[105], nr = 0;
    while (n != 0){ 
        if ((n%10) % 2 == 1){
            ++nr;
            v[nr] = n % 10;
         }
         n /= 10;
    }
    for(int i = 2; i <=nr; i++){
        if (v[i] != v[1]){
            return 0;
        }              
     }
     return 1;
}

int main(){
   

    
    return 0;
}




