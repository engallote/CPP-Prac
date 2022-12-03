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
    int a, b, cnt = 0;

    for(int i = 1; i <= N; i++) {
        a = 1;
        for(int j = 1; j <= i; j++) {
            b = i - (j - 1);
            a = j;
            cnt++;
            if(cnt == N) break;
        }
        if(cnt == N) break;
    }

    cout << b << " " << a;
    return 0;
}