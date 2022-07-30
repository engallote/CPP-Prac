#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int N = 0;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    vector<int> v(N);

    int x = 0;
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int l = 0, r = 100000000, res = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        int cnt = 0;

        for(int i = 0; i < N / 2; i++) {
            if(v[i] + v[N - i - 1] >= mid) cnt += 1;
            else break;
        }

        if(cnt == N / 2) {
            res = max(res, mid);
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << res;

    return 0;
}