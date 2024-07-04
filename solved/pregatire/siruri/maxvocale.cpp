#include <bits/stdc++.h>
#include <cstring>
#include <fstream>

using namespace std;

// ifstream fin("comori.in");
// ofstream fout("comori.out");
// #define cin fin
// #define cout fout

bool isV(char c){
    return (strchr("aeiouAEIOU",c)) != NULL;
}

int ap[300];

int main()
{
    char s[300];
    cin.get(s,300);
    int n = strlen(s);
    int max = -1;
    for (int i = 0; i <= n-1; i++){
        if (isV(s[i])){
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= ' ';
            }
            ++ap[s[i]];
        }
    }
    char c1 = 'A';
    int maxi = 0;
    for (char c : {'A', 'E', 'I', 'O', 'U'}) {
        if (ap[c] > maxi) {
            maxi = ap[c];
            c1 = c;
        }
    }
    cout << c1 << '\n';
   


    return 0;
}

alta varianta
#include <bits/stdc++.h>
using namespace std;

// ifstream fin("input.txt");
// ofstream fout("output.txt")
// #define cin fin
// #define cout fout
bool isV(char c){
    return (strchr ("AEIOU",c)) != NULL;
}

int ap[300];
int main() {

    char s[300];
    char x,y;
    cin.get(s,  300);
    int n = strlen(s);
    int max = -1 , nr = 0;

    for (int i = 0; i < n; ++i){
        if( s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= ' ';
        }
    }

    int maxi = 0;
    char res;
    for(int i = 0; i < n; ++i){
        if (isV(s[i])){
            ++ap[s[i]];
            if (ap[s[i]] == maxi) {
                if (s[i] < res) {
                    res = s[i];
                }
            }
            if (ap[s[i]] > maxi) {
                maxi = ap[s[i]];
                res = s[i];
            }
        }
    }
    cout << res;
    
    return 0;
}











