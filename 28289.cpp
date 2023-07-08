#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int P;
    cin >> P;

    int g, c, n;
    int sw = 0, im = 0, ai = 0, no = 0;

    for(int i = 0; i < P; i++) {
        cin >> g >> c >> n;

        if(g == 1) no += 1;
        else if(c <= 2) sw += 1;
        else if(c == 3) im += 1;
        else ai += 1;
    }

    cout << sw << endl;
    cout << im << endl;
    cout << ai << endl;
    cout << no << endl;
    return 0;
}