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
#include <sstream>
#include <regex>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long N;
    cin >> N;

    int cnt = 0;
    while(N > 1) {
        cnt += 1;
        if(N % 2 != 0)
        {
            N += 1;
            cnt += 1;
        }

        N /= 2;
    }

    cout << cnt << endl;
    return 0;
}