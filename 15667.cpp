#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    int N;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for(int i = 1; i <= 10000; i++){
        int num = i + i * i + 1;
        if(num == N){
            cout << i << " " << endl;
            break;
        }
    }

    return 0;
}