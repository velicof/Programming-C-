int ExistaImpareRec(int n) {
    if (n <= 9){
        if (n % 2 == 1) return 1;
        return 0;
    }
    int u = n % 10;
    if (u % 2 == 1){
        return 1;
    }
    return ExistaImpareRec(n / 10);
    
}