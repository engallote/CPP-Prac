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

    int arr[N];
    int res = 1000000000;

    for(int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr + N);

    for(int i = 0; i <= 100; i++) {
        int limit = i + 17, ret = 0;
        for(int j = 0; j < N; j++) {
            if(i <= arr[j] && arr[j] <= limit) continue;
            ret += pow(min(abs(i - arr[j]), abs(limit - arr[j])), 2);
        }
        res = min(res, ret);
    }

    cout << res;

    return 0;
}