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

    string N;
    getline(cin, N);

    int s = 0, e = 0;

    while(s != -1 && e != -1) {
        s = N.find("What is");
        e = N.find("?");

        if(s == -1 || e == -1) break;

        if(e <= s) {
            N = N.substr(e + 1);
            if(N.length() <= e + 1) break;
            continue;   
        }
        string str = N.substr(s, e - s);

        // cout << s << " " << e << endl;
        if(str.find('.') != -1) {
            int idx = str.find('.');
            if(N.length() <= idx + 1) break;
            N = N.substr(idx + 1);
            continue;
        }
        
        str = str.replace(0, 4, "Forty-two");
        cout << str << "." << endl;

        if(e + 1 >= N.length()) break;

        N = N.substr(e + 1);
    }

    return 0;
}