void f_expo(int a[], int n){
    for (int i = 0 ; i < n; i++){
        int p = 1, e = 0;
        while (p <= a[i]) {
            p *= 2;
            ++e;
        }
        --e;
        a[i] = e;
    }
}


// void f_expo(int a[], int n){
//     int p = 1, e = 0;
//     for (int i = 0 ; i < n; i++){
//         while (p <= a[i]) {
//             p *= 2;
//             ++e;
//         }
//         while (p > a[i]) {
//             p /= 2;
//             --e;
//         }
//         a[i] = e;
//     }
// }