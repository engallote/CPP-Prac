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

    string res = "NO";
    string a = "";
    int b = 0;

    int straw = 0, banana = 0, lime = 0, plum = 0;

    for(int i = 0; i < N; i++) {
        cin >> a >> b;

        if(a.compare("STRAWBERRY") == 0) straw += b;
        else if(a.compare("BANANA") == 0) banana += b;
        else if(a.compare("LIME") == 0) lime += b;
        else plum += b;
    }

    if(straw == 5 || banana == 5 || lime == 5 || plum == 5) res = "YES";

    cout << res;

    return 0;
}