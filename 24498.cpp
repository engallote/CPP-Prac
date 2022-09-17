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

    int arr[N] = {};

    for(int i = 0; i < N; i++) cin >> arr[i];

    int res = max(arr[0], arr[N - 1]);
    for(int i = 1; i < N - 1; i++) {
        int num = min(arr[i - 1], arr[i + 1]);
        res = max(arr[i] + num, res);
    }

    cout << res;

    return 0;
}