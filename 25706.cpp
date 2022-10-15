#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int arr[N];
    int res[N + 1];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        res[i] = 0;
    }
    res[N] = 0;

    for(int i = N - 1; i >= 0; i--) {
        if(arr[i] == 0) res[i] = res[i + 1] + 1;
        else {
            if(i + arr[i] + 1 < N) res[i] = res[i + arr[i] + 1] + 1;
            else res[i] = 1;
        }
    }

    for(int i = 0; i < N; i++) cout << res[i] << " ";
    return 0;
}