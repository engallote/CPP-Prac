#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

long long gcd(long long a, long long b);

int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    long long a, b, g;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;

        g = gcd(a, b);
        if(g == 1) {
            cout << a * b << endl;
        }
        else {
            cout << g * (a / g) * (b / g) << endl;
        }
    }

    return 0;
}

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    if(a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    return gcd(b, a % b);
}