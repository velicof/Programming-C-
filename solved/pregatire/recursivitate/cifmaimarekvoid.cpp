void cnt_cif(int n, int k, int& c){
    if (n < 10){

        c = (n >= k ? 1 : 0);

        return;
    }
    cnt_cif(n/10, k, c);

    if(n % 10 >= k){
        c++;
    }

}


// camp = info.data == null ? CUSTOM : info.data;

// if (conditie) {
//     st1;
// }
// else {
//     st2;
// }

// este echivalent cu:

// conditie ? st1 : st2;