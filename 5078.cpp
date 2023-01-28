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

    int W, H;

    while(true) {
        cin >> W;

        if(W == 0) break;

        vector<string> s, m, l;

        string str = "";
        for(int i = 0; i < W; i++) {
            cin >> str;

            if(str[0] == 'S') s.push_back(str);
            else if(str[0] == 'M') m.push_back(str);
            else l.push_back(str);
        }

        cin >> H;

        for(int i = 0; i < H; i++) {
            cin >> str;

            if(str[0] == 'S') s.push_back(str);
            else if(str[0] == 'M') m.push_back(str);
            else l.push_back(str);
        }

        sort(s.begin(), s.end());
        sort(m.begin(), m.end());
        sort(l.begin(), l.end());

        for(string v : s) cout << v << " ";
        for(string v : m) cout << v << " ";
        for(string v : l) cout << v << " ";
        cout << endl;
    }

    return 0;
}