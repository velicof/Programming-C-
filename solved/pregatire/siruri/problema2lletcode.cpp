#include <iostream>
#include <string.h>
#include <fstream>
#include <map>

using namespace std;

map<int, int> ap;


int main()
{
       char s[105], rez[105], k = 0;
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
            }
       }

       cout << maxi << '\n';
        

    return 0;
}

// bcfdlmf

//   [last  19], 20

// O(n^4)

// char s[105], rez[105], k = 0;
//     cin >> s;

//     int n = strlen(s);
//     int maxi = 0;
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = i; j < n; ++j) {
//         // [i, j]
//         if (j - i + 1 <= maxi) continue;
//         bool ok = true;
//         for (int t = i; t <= j; ++t) {
//             for (int k = t + 1; k <= j; ++k) {
//                 if (s[t] == s[k]) {
//                     ok = false;
//                     k = j + 1;
//                     t = j + 1;
//                 }
//             }
//         }
//         if (ok) maxi = j - i + 1;
//         }
//     } 

//     cout << maxi << '\n';




// O(n^3)

// char s[105], rez[105], k = 0;
// cin >> s;

// int n = strlen(s);
// int maxi = 0;

// for (int i = 0; i < n; ++i) {
//     for (int j = i; j < n; ++j) {
//     // [i, j]
//     if (j - i + 1 <= maxi) continue;
//     bool ok = true;
//     bool ap[200] = {0};
//     for (int t = i; t <= j; ++t) {
//         if (ap[s[t]] == true) {
//             ok = false;
//             break;
//         }
//         ap[s[t]] = true;
//     }
//     if (ok) maxi = j - i + 1;
//     }
// } 

// cout << maxi << '\n';


// O(n ^ 2)

// char s[105], rez[105], k = 0;
// cin >> s;

// int n = strlen(s);
// int maxi = 0;

// for (int i = 0; i < n; ++i) {
//     bool ap[200] = {0};
//     for (int j = i; j < n; ++j) {
//     if (ap[s[j]] == true) {
//         break;
//     }
//     ap[s[j]] = true;
//     if (j - i + 1 >= maxi) {
//         maxi = j - i + 1;
//     }
//     }
// } 

// cout << maxi << '\n';

// O(n)

// char s[105], rez[105], k = 0;
// cin >> s;

// int n = strlen(s);
// int maxi = 0;

// bool ap[200] = {0};
// int last = 0;
// ap[s[0]] = true;
// maxi = 1;
// for (int i = 1; i < n; ++i) {
//     // [last, i - 1] este bun
//     if (ap[s[i]] == false) {
//         ap[s[i]] = true;
//     } else {
//         while (s[last] != s[i]) {
//             ap[s[last]] = false;
//             ++last;
//         }
//         ++last;
//     }
//     if (i - last + 1 > maxi) {
//         maxi = i - last + 1;
//     }
// }

// cout << maxi << '\n';


//facuta homework

// #include <bits/stdc++.h>
// #include <cstring>
// using namespace std;

// int main() {
//    char s[105];
//    int maxi = 1, pozi = 0, pozf = 0, len = 0;
//    cin >> s;
//    int n = strlen(s);
//    for (int i = 0 ; i < n; i++){
//         for (int j = i+1; j < n; j++){
//             if (s[i] == s[j]){
//                 len = j - i;
//                 break;
//             }
//         }
//         if(maxi < len){
//             maxi = len;
//         }
//    }
//    cout << maxi;
 
//     return 0;
// }
