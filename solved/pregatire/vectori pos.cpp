#include <bits/stdc++.h>
using namespace std;



int main() {

    int n,v[1005];

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    int pos1 = -1, pos2 = -1;

    for (int i = 1; i <= n; i++){
        if( v[i] % 2 == 0){
            pos1 = i;
            break;
        }
    }

    for (int i = n; i >= 1; i--){
        if (v[i] % 2 == 0){
            pos2 = i;
            break;
        }
    }

    if (pos1 == -1) {
        cout << "NU EXISTA\n";
        return 0;
    }

    int sum = 0;
    for (int i = pos1; i <= pos2; ++i) {
        sum += v[i];
    }

    cout << sum << '\n';



    return 0;
}


// varianta mai scurta

// #include <bits/stdc++.h>
// using namespace std;



// int main() {

//     int n,v[1005];

//     cin >> n;

//     for (int i = 1; i <= n; i++){
//         cin >> v[i];
//     }

//     int pos1 = -1, pos2 = -1;

//     for (int i = 1; i <= n; i++){
//         if( v[i] % 2 == 0 && pos1 < 0){
//             pos1 = i;
//         }
//         if (v[i] % 2 == 0) {
//             pos2 = i;
//         }
//     }

//     if (pos1 == -1) {
//         cout << "NU EXISTA\n";
//         return 0;
//     }

//     int sum = 0;
//     for (int i = pos1; i <= pos2; ++i) {
//         sum += v[i];
//     }

//     cout << sum << '\n';



//     return 0;
// }