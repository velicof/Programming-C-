#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool ispar(char c){
    return strchr("02468", c) != NULL;
}

int main() {
   char s[105], c[105], rez[105];
   int k = 0;
   cin >> s;
   cin >> c;
   if (strlen(s) == strlen(c)){
    for (int i = strlen(s) - 1; i > 0 ; i--){
        if(ispar(c[i])){
            rez[k] = s[i];
            k++;
        }
    }
    for (int i = 0; i < strlen(s); i++){
        if(!ispar(c[i]) || i == 0){
            rez[k] = s[i];
            k++;
        }
    }
   } 
   for (int i = 0; i < strlen(rez); i++){
        cout << rez[i];
   }
    return 0;
}

