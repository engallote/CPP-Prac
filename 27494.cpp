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

    int idx1, idx2, idx3, idx4, res = 0;
    for(int i = 2023; i <= N; i++) {
        string s = to_string(i);

        idx1 = idx2 = idx3 = idx4 = 0;
        idx1 = s.find('2', idx1);
        idx2 = s.find('0', idx1);
        idx3 = s.find('2', idx2);
        idx4 = s.find('3', idx3);

        if(idx1 < idx2 && idx2 < idx3 && idx3 < idx4) {
            // cout << idx1 << " " << idx2 << " " << idx3 << " " << idx4 << endl;
            res += 1;
        }
    }

    cout << res << endl;

    return 0;
}