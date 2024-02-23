#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


int main (){
    
    int n,S=0;
    
    cin >> n;
    
    for (int i=1;i<=n;i++){
        if (i % 2 == 1){
            S = S + i * (i + 1);
        }else{
            S = S - i * (i + 1);
        }
    }
    cout <<"Rezultatul este "<< S;


return 0;
}