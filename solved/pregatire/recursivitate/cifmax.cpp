
// Calculeaza cea mai mare cifra dintr-un numar
int cifMax(int n) {
    if (n <= 9) {
        return n;
    }
    int u = n % 10;
    int x = cifMax(n / 10);
    if (u > x) return u;
    return x;
}