bool f(int x) {
    return (x >= 10 && x <= 99);
}

// Calculeaza cate numere de 2 cifre sunt intr-un vector 
// pe intervalul [x, y]
int doua(int v[], int x, int y) {
    if (x == y) {
        if (f(v[x])) return 1;
        return 0;
    }
    if (x > y) return 0;

    return f(v[x]) + doua(v, x + 1, y);
}