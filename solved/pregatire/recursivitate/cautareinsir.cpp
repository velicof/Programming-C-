int cautare(int n, double X[], double v){
    if (n == 0){
        if (X[0] == v){
            return 0;
        }else{
            return -1;
        }
    }
    if (X[n - 1] != v){
        return cautare (n - 1,X,v);
    }else{
        return n - 1;
    }
  
}