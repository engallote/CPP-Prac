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

    int res = 0;
    for(int i = 1; i * i <= N; i++) res += 1;

    cout << res;

    return 0;
}