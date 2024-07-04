#include <iostream>
#include <string.h>
using namespace std;


int main(){
    int n,k;
    cin >> n;
    char s[105][105];  
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
   
    cin >> k;
    bool sortat = false;
    while (!sortat){
        sortat = true;
        for (int j = 0; j < n-1; j++){
            int l1 = strlen(s[j]);
            int l2 = strlen(s[j+1]);
            if(l1 != k && l2 == k){
                swap(s[j],s[j+1]);
                sortat = false;
            }
        }
    }
    for (int i = 0; i < n ; i++){
        cout << s[i] << " ";
    }   
  return 0;  
}