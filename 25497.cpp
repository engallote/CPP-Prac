#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void) {
    int N;
    string str;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> str;

    int res = 0;
    int l = 0, s = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'L') l += 1;
        else if(str[i] == 'S') s += 1;
        else if(str[i] == 'R') {
            if(l) {
                res += 1;
                l -= 1;
            }
            else break;
        }
        else if(str[i] == 'K') {
            if(s) {
                res += 1;
                s -= 1;
            }
            else break;
        }
        else res += 1;
    }


    cout << res;

    return 0;
}