#include <iostream>
using namespace std;

int main(void) {
    int N, K;
    cin >> N >> K;

    bool flag;
    int h = 0, m = 0, s = 0, res = 0;
    while(h <= N) {
        flag = false;
        if(K == 0 && h <= 10) flag = true;
        int tmp = h;
        while(!flag && tmp > 0) {
            if(tmp % 10 == K) {
                flag = true;
                break;
            }
            tmp /= 10;
        }

        tmp = m;
        if(K == 0 && m <= 10) flag = true;
        while(!flag && tmp > 0) {
            if(tmp % 10 == K) {
                flag = true;
                break;
            }
            tmp /= 10;
        }

        tmp = s;
        if(K == 0 && s <= 10) flag = true;
        while(!flag && tmp > 0) {
            if(tmp % 10 == K) {
                flag = true;
                break;
            }
            tmp /= 10;
        }

        if(flag) res += 1;

        s += 1;

        if(s == 60) {
            s = 0;
            m += 1;
        }
        if(m == 60) {
            m = 0;
            h += 1;
        }
        if(h == 24) break;
    }

    cout << res;

    return 0;
}