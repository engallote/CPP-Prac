#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;

    cin >> N >> K;

    int arr[K] = {};
    int cnt = 0;

    for(int i = 0; i < K; i++) {
        for(int j = i; j < K; j++) {
            arr[j] += 1;
            cnt += 1;
        }
    }

    if(cnt > N) {
        cout << -1;
        return 0;
    }

    while(cnt < N) {
        for(int i = K - 1; i >= 0; i--) {
            arr[i] += 1;
            cnt += 1;

            if(cnt == N) break;
        }
    }

    cout << arr[K - 1] - arr[0];

    return 0;
}