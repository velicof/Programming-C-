#include <bits/stdc++.h>
using namespace std;

void cmmdc(int a, int b, int& r) {
    if (b == 0 ){
       r = a;
    }else{
            cmmdc(b,a%b,r);     
    }       
}
int main (){
    int a,b,r;
    cin >> a >> b;
    cmmdc(a, b, r);
    cout <<r;
}