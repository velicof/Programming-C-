#include <iostream>
#include <string.h>
using namespace std;


int main(){
    
    char s[105];  
    cin.getline(s, 105);
    int n = strlen(s);
    int i = 0;
    while (i < n){
        if (i < n - 1 && s[i] == 'a' && s[i+1] == 'e'){
            strcpy(s + i, s+i+2);
            --i;
            n -= 2;
        }
        i++;   
    }
    cout << s << '\n';
    
    
}