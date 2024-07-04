#include <iostream>
#include <string.h>
#include <fstream>
#include <map>

using namespace std;

map<int, int> ap;


int main()
{
    int v[105],n, maxi = 0;

    cin >> n;

    for (int i = 0;  i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (min(a[i], a[j]) * (j - i) > maxi) {
                maxi = min(a[i], a[j]) * (j - i);
            }
        }
    }
    cout << maxi;
        

    return 0;
}