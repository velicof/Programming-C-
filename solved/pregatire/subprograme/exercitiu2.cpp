
int NrTriplete(int a[], int n, int S){
    int nr = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int k = j+1; k < n; k++){
                if (a[i] + a[j] + a[k] < S){
                    ++nr; 
                }
            }
        }
    }
    return nr;
}