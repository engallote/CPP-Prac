#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    double c, b;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> c >> b;

    double res = c / b;
    cout << fixed;
    cout.precision(10);
    cout << res;

    return 0;
}