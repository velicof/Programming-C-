#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main (){
    char s[105];
    cin.getline (s, 105);

    int n = strlen (s);
    char *p = strtok (s , " ");
    while (p != NULL){
        if (strlen(p) % 2 != 0){
            int t = (strlen(p)/2);
            strcpy(p + t , p + t + 1);
            // cout << p << " " << "\n";
            // cout << t << "\n";
            // cout << p[t] << " "; 
        
        p = strtok(NULL, " .!:,");
        cout << p << " ";
    }}
   
    }




#include <iostream>
#include <string.h>
using namespace std;


int main(){
    
    char s[105];
    cin.getline (s, 105);

    int n = strlen (s);
    char *p = strtok (s , " ");
    while (p != NULL){
        if (strlen(p) % 2 != 0){
            int t = (strlen(p)/2);
            strcpy(p + t , p + t + 1);
        }
            // cout << p << " " << "\n";
            // cout << t << "\n";
            // cout << p[t] << " "; 
        cout << p << " ";
        p = strtok(NULL, " ");
    }

}
