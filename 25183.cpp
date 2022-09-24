#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int N;
    string s;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> s;

    int cnt = 1, res = 0;
    for(int i = 1; i < N; i++) {
        if(i - 1 >= 0 && abs(int(s[i]) - int(s[i - 1])) == 1) cnt += 1;
        else cnt = 1;

        if(cnt >= 5) res = 1;
    }

    if(res == 1) cout << "YES";
    else cout << "NO";

    return 0;
}