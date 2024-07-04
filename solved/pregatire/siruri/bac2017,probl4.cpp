#include <iostream>
#include <string.h>
using namespace std;


int main(){
    int n,i, cnt = 0;
    cin >> n;
    char s[105]; 
    for (int i = 0; i < n; i++){
        cin >> s;
        if (strstr(s, "are") != NULL && (strstr(s, "are") - s) == strlen(s) - 3) {
            ++cnt;
        }
    }

    cout << cnt << '\n';
   
  
    
  return 0;  
}

//  t    o    b     o   gan
//  0x0  0x1  0x2   0x3

varianta fara functii:
#include <iostream>
#include <string.h>
using namespace std;


int main(){
    int n,i, cnt = 0;
    cin >> n;
    char s[105]; 
    for (int i = 0; i < n; i++){
        cin >> s;
        int pos = -1;
        for (int j = 0; j < strlen(s) - 3; ++j) {
            if (s[j] == 'a' && s[j + 1] == 'r' && s[j + 2] == 'e') {
                pos = j;
                break;
            }
        }
        if (pos == strlen(s) - 3) ++cnt;
    }

    cout << cnt << '\n';
   
  
    
  return 0;  
}

//  t    o    b     o   gan
//  0x0  0x1  0x2   0x3