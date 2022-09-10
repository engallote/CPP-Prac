#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int N;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int arr[2 * N] = {};

    int res = 1000000000;
    for(int i = 0; i < 2 * N; i++) cin >> arr[i];

    sort(arr, arr + 2 * N);

    for(int i = 0; i < N; i++) res = min(res, arr[i] + arr[2 * N - 1 - i]);

    cout << res;

    return 0;
}