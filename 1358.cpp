#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

double circle(double a, double b, double x, double y) {
    return (a - x) * (a - x) + (b - y) * (b - y);
}

int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double H, W, X, Y, P;

    cin >> W >> H >> X >> Y >> P;
    
    int res = 0;
    double x, y, r = H / 2;
    for(int i = 0; i < P; i++) {
        cin >> x >> y;

        if (X <= x && x <= X + W && Y <= y && y <= Y + H) res+=1;
        else if(circle(X, Y + r, x, y) <= r * r) res+=1;
        else if (circle(X + W, Y + r, x, y) <= r * r) res+=1;
    }

    cout << res;

    return 0;
}