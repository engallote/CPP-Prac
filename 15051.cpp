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

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    
    int res = 100000000;
    
    res = min(res, a2 * 2 + a3 * 4);
    res = min(res, a1 * 4 + a2 * 2);
    res = min(res, a1 * 2 + a3 * 2);

    cout << res << endl;
    return 0;
}