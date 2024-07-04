#include <bits/stdc++.h>
#include <cstring>
#include <fstream>

using namespace std;

// ifstream fin("comori.in");
// ofstream fout("comori.out");
// #define cin fin
// #define cout fout

bool isV(char c) {
    return strchr("aeiou", c) != NULL;
}

bool isC(char c) {
    return !isV(c) && c != ' ';
}

int main()
{
    char s[300];
    cin.get(s,300);
    int n = strlen(s);
    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (isV(s[i]) && isC(s[i - 1]) && isC(s[i + 1])) {
            ++ans;
        } 
    }

    cout << ans << '\n';
   


    return 0;
}