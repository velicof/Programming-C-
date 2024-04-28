int nr_cif_zero(int n) {
    if (n <= 9){
        if (n == 0) return 1;
        return 0;
    }
    int u = n % 10;
    if (u == 0){
        return 1 + nr_cif_zero(n / 10);
    }
    return nr_cif_zero(n / 10);
    
}
int main (){
    int n;
    cin >> n;
    cout << nr_cif_zero(n);
}