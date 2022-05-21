#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int h, m, s, q, t, num;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> h >> m >> s;
    cin >> q;
    
    while(--q >= 0) {
        cin >> t;

        if(t == 1) {
            cin >> num;
            int div = num / 60;
            int mod = num % 60;

            s += mod;
            if(s >= 60) {
                m += 1;
                s %= 60;
            }
            m += div;
            if(m >= 60) {
                h += m / 60;
                h %= 24;
                m %= 60;
            }
        }
        else if(t == 2) {
            cin >> num;
            int div = num / 60;
            int mod = num % 60;

            s -= mod;
            if(s < 0) {
                s += 60;
                m -= 1;
            }
            m -= div;
            while(m < 0) {
                m += 60;
                h -= 1;
                if(h < 0) h = 23;
            }
        }
        else {
            cout << h << " " << m << " " << s << "\n";
        }
    }

    return 0;
}