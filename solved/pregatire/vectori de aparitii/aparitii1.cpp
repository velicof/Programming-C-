#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
   char s[105];
   int pozi = 0, pozf = 0;
cin >> s;

int n = strlen(s);
int maxi = 0;

bool ap[200] = {0};
int last = 0;
ap[s[0]] = true;
maxi = 1;
for (int i = 1; i < n; ++i) {
    // [last, i - 1] este bun
    if (ap[s[i]] == false) {
        ap[s[i]] = true;
    } else {
        while (s[last] != s[i]) {
            ap[s[last]] = false;
            ++last;
        }
        ++last;
    }
    if (i - last + 1 > maxi) {
        maxi = i - last + 1;
        pozi = i;
        pozf = last;
    }
}
for(int i = pozf; i <= pozi; i++){
    cout <<s[i]<< endl;
}
cout <<" "<< pozi <<" "<< pozf << endl;
cout << maxi << '\n';
    return 0;
}

