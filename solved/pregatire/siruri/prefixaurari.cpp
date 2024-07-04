#include <iostream>
#include <string.h>
using namespace std;


int main(){
    
    char b[105];
    char a[105];
    cin.getline(b, 105);

    int n = strlen(b);

    for (int i = 0; i < n / 2; i++){
        a[i] = b[i];
    }
    a[n / 2] = '\0';
    cout << a ;
    
}