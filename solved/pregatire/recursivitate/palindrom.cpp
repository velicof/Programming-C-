int PalRec(int a[], int st, int dr){
    if (st >= dr){
        return 1;
    }

    if (a[st] == a[dr]){
        return PalRec(a,st + 1,dr - 1);
    }
    return 0;
}