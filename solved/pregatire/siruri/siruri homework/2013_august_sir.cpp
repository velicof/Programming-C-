#include <bits/stdc++.h>
#include <cstring>
using namespace std;


int main (){
    char s[105];
    cin.getline (s, 105);

    int n = strlen (s);

    bool ok = true;
    for (int i = 0; i < n; i++){
        if (s[i] == ' ' &&  s[i+1] == ' '){
            int j = i + 1;
            while (s[j] == ' '){
                j++;
                // cout << " gasit spatiu: j este " << j;
            }
            --j;
             strcpy(s + i, s + j);
        
        }
    }
    cout << s << "\n";

}
