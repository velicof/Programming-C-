
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  char a[105], b[105];
  cin >> a;
  cin >> b;
  int na = strlen(a);
  int nb = strlen(b);

  bool ok = true;
  for (int i = 0; i < na; i++){
    char aux[105];
    strcpy(aux, a + i);
    int len = strlen(aux);
    if (len > nb) continue;
    if (strncmp(aux, b, len) == 0) {
       cout << aux << " ";
    }

  }
 

  return 0;
}