#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int N;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    long res = 1;

    for(int i = 1; i <= N; i++) res *= i;
    
    cout << res;

    return 0;
}