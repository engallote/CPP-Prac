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

    int S, P;
    cin >> S >> P;

    string str;
    cin >> str;

    int a, c, g, t;
    cin >> a >> c >> g >> t;

    int l = 0, r = P, A = 0, C = 0, G = 0, T = 0, res = 0;
    for(int i = 0; i < P; i++) {
        if(str[i] == 'A') A += 1;
        else if(str[i] == 'C') C += 1;
        else if(str[i] == 'G') G += 1;
        else if(str[i] == 'T') T += 1;
    }

    if(A >= a && C >= c && G >= g && T >= t) res += 1;

    while(r < str.length()) {        
        if(str[l] == 'A') A -= 1;
        else if(str[l] == 'C') C -= 1;
        else if(str[l] == 'G') G -= 1;
        else if(str[l] == 'T') T -= 1;

        if(str[r] == 'A') A += 1;
        else if(str[r] == 'C') C += 1;
        else if(str[r] == 'G') G += 1;
        else if(str[r] == 'T') T += 1;
        
        if(A >= a && C >= c && G >= g && T >= t) res += 1;
        l += 1;
        r += 1;
    }

    cout << res << endl;

    return 0;
}