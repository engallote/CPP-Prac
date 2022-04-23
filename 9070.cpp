#include <iostream>
#include <float.h>
#include <vector>
using namespace std;

int main(void) {
    int T;
    cin >> T;

    while(--T >= 0) {
        int N;
        cin >> N;

        double min = __DBL_MAX__;
        int res = 0;
        for(int i = 0; i < N; i++) {
            double w, c;
            cin >> w >> c;

            if(c / w < min) {
                min = c / w;
                res = c;
            }
            else if(c / w == min) {
                if(res > (int)c) res = (int)c;
            }
        }

        cout << res << "\n";
    }

    return 0;
}