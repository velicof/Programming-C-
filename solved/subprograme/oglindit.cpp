#include <bits/stdc++.h>
using namespace std;

int oglindit (int x){
    int og = 0;
    while (x != 0){
        og = x % 10 + og * 10; 
        x /= 10;
    }
    return og;
}

int main(){
    int n;
    cin >> n;
    cout << oglindit(n);
}
