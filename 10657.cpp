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

    vector<pair<int, int>> v;
    int res = N, a, b;

    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        v.push_back(pair<int,int>(a, b));
    }

    sort(v.begin(), v.end());

    int m = v[N - 1].second;
    for(int i = N - 1; i >= 0; i--) {
        if(m < v[i].second) res -= 1;
        else m = v[i].second;
    }

    cout << res;

    return 0;
}