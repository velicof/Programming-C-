int egaleX(int a[105][105], int x, int y, int n, int m) {
    if (x == n && y == m) {
        return 1;
    }
    if (a[x][y] != a[n][m]) {
        return 0;
    }
    if (y < m) {
        return egaleX(a, x, y + 1, n, m);
    }
    return egaleX(a, x + 1, 1, n, m);
}

int egale(int a[105][105], n, m) {
    return egaleX(a, 1, 1, n, m);
}

