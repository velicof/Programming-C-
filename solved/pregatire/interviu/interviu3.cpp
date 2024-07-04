#include <iostream>
#include <string.h>
using namespace std;

// Un autobuz initial gol trebuie sa treaca prin n statii. La fiecare statie se stie
// cati calatori coboara si cati urca. Care este dimensiunea minima a autobuzului ca numar
// de locuri in cat la fiecare moment toata lumea sa poata intra in autobuz la statie si
// nimeni sa nu stea in picioare?

// Ex: n = 3
// a = [0, 1, 4]
// b = [3, 2, 2]

// raspuns = 6

int main(){
    
    int n,u[105],c[105];
    cin >> n;


    int s = 0, max = -1;
    for( int i = 1; i <= n ; i ++){
        cin >> u[i];
        cin >> c[i];
        s = s + (c[i] - u[i]);
        if (s > max){
            max = s;
        }
    }

    cout << max;


    

    return 0;
}
