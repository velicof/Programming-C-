#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int n,v[1005],sp=0,fp=0,dim=0,st=0,dr=0;

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++){
        sp=-1;
        fp=-1;
        while (v[i] == 0 && i <= n){
            if (sp == -1){
                sp = i;
            }
            fp = i;
            i++;
        }
    if (dim < fp - sp + 1){
        dim = fp - sp + 1;
        st = sp;
        dr = fp;
    }
    }
    cout << st << " " << dr;
    return 0;
}


