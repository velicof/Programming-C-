#include <bits/stdc++.h>

using namespace std;
ifstream fin("secvsummax.in");
ofstream fout("secvsummax.out");

// #define cin fin
// #define cout fout

const int maxn = 1e6 + 5;

// Calculeaza suma pe intervalul [x, y]
int sumV(int v[], int x, int y) {
    if (x == y) return v[x];
    if (x > y) return 0;
    return v[x] + sumV(v, x + 1, y);
}

// sum(v, x, y) = v[x], x == y
// sum(v, x, y) = 0, x > y
// sum(v, x, y) = 

// [x, y] = v[x] + [x + 1, y]
// [x, y] = v[y] + [x, y - 1]
// [x, y] = [x, (x + y) / 2] + [(x + y) / 2 + 1, y]

int main()
{
    int n, v[105];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    int x, y;
    cin >> x >> y;
    cout << sumV(v, x, y) << '\n';



    
    return 0;
}
