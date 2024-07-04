#include <bits/stdc++.h>
using namespace std;

// ifstream fin("input.txt");
// ofstream fout("output.txt")
// #define cin fin
// #define cout fout

int main() {

    char s[105];
    cin.get(s,  105);
    int n = strlen(s);
    for (int i = 0; i < n; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            if(i == 0 || s[i - 1] == ' '){
                cout << s[i];
            }
        }
    }

    
    return 0;
}



solutie paralela-


#include <bits/stdc++.h>
using namespace std;

// ifstream fin("input.txt");
// ofstream fout("output.txt")
// #define cin fin
// #define cout fout

int main() {

    char s[105];
    cin.get(s,  105);
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j < n && s[j] != ' ') {
            ++j;
        }
        // cuvantul meu e intre [i, j - 1]
        if (s[i] >= 'A' && s[i] <= 'Z') {
            ++i;
        }
        if (j < n) ++j;
        strcpy(s + i, s + j);
        n -= j - i;
        --i;
    }
    
    cout << s << '\n';

    // strcpy(s + i, s + i + k) -> Stegrea intervalul [i, i + k - 1]
    // strcpy(s + a, s + b) -> b > a -> strge intervalul [a, b - 1]
    
    return 0;
}



















