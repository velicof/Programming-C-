#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool isV(char c){
    return strchr("aeiou", c) != NULL;
}
bool isOnlyVowels(const char *word) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!isV(word[i])) {
            return false;
        }
    }
    return true;
}
bool isC(char c){
    return !isV(c) && c != ' ';
}

int main (){
    char s[105];
    cin.getline(s, 105);
    char *p = strtok(s, " ,.;!?");
    
    while (p != NULL){
        if (isOnlyVowels(p)){
            // cout << p <<'\n';
        }
        p = strtok(NULL, " .!:,");
        cout << p << " ";
    }

}
