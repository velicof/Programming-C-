#include <iostream>
#include <string.h>
#include <fstream>
#include <map>

using namespace std;

map<int, int> ap;


int main()
{
    int nums[1005],ap[1005] target, n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cin >> target;
    
    for (int i = 0; i < n; i++){   
        if (ap[target - nums[i]] != 0) {
            cout << ap[target - nums[i]] - 1 << " " << i << '\n';
            return 0;
        }
        ap[nums[i]] = i + 1;
    }

    return 0;
}

// x + y = target 

// y = target - x 

// ap[x] = -1 daca nu apare sau i daca apare pe pozitia i 



