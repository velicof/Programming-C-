
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  char a[105], b[105];
  cin >> n;
  cin >> a;
  int la = strlen(a);
  int cnt = 0;
  for (int i = 2; i <= n; i++)
  {
    cin >> b;
    int lb = strlen(b);
    if (lb < la)
      continue;

    char c[105];
    bool ok = true;
    for (int j = 0; j < la; j++)
    {
      if (a[j] != b[j])
        ok = false;
    }
    if (ok)
      ++cnt;
  }

  cout << cnt << '\n';

  return 0;
}