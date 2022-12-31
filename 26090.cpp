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

    int N;

    cin >> N;

    int arr[N + 1];
    int sum[N + 1];
    bool chk[1000001];

    chk[0] = chk[1] = true;
    for(int i = 2; i <= 1000000; i++) {
        if(chk[i]) continue;
        for(int j = i + i; j <= 1000000; j+=i) chk[j] = true;
    }

    int res = 0;
    sum[0] = arr[0] = 0;
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    for(int i = 1; i <= N; i++) {
        for(int j = i + 1; j <= N; j++) {
            if(chk[j - i + 1] || chk[sum[j] - sum[i - 1]]) continue;
            ++res;
        }
    }

    cout << res;

    return 0;
}