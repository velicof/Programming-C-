#include <iostream>
#include <string.h>
using namespace std;


int main(){
    
    char s[105];
    cin.getline (s, 105);

    int n = strlen (s);
    bool ok = true;
    bool c = false;
    for (int i = 0; i < n; i++){
        if (strchr ("aeou" , s[i]) != NULL){
            ok = false;
        }
        if (strchr("aeiou", s[i]) == NULL){
            c = true;
        }
    }

    if (ok && c){
        cout << "DA";
    }else{
        cout <<"NU";
    }

}