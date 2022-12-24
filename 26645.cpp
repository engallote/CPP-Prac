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

    if(N <= 205) cout << 1;
    else if(N <= 217) cout << 2;
    else if(N <= 228) cout << 3;
    else cout << 4;

    return 0;
}