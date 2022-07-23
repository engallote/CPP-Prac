#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int X, N;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> X >> N;

    int a, b, res = 0;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        res += a * b;
    }

    if(res == X) cout << "Yes";
    else cout << "No";

    return 0;
}