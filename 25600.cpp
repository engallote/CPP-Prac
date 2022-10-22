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

    int N, a, d, g;

    cin >> N;

    int res = 0;

    for(int i = 0; i < N; i++) {
        cin >> a >> d >> g;
        int mul = 1;
        if(a == d + g) mul = 2;

        res = max(res, a * (d + g) * mul);
    }

    cout << res;
    return 0;
}