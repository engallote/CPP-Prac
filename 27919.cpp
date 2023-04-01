#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;

    int u = 0, d = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'U' || s[i] == 'C') u += 1;
        else if(s[i] == 'D' || s[i] == 'P') d += 1;
    }

    string ans = "";
    if(u > (d + 1) / 2) {
        ans += "U";
    }
    if(d > 0) {
        ans += "DP";
    }

    cout << ans << endl;

    return 0;
}