#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int T, N;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    long arr[100001] = {0,};
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 2;
    arr[4] = 3;
    arr[5] = 3;
    arr[6] = 6;

    for(int i = 7; i <= 100000; i++){
        arr[i] = (arr[i - 2] + arr[i - 4] + arr[i - 6]) % 1000000009;
    }

    for(int i = 1; i <= T; i++){
        cin >> N;
        cout << arr[N] << endl;
    }

    return 0;
}